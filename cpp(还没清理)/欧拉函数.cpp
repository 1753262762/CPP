#include<bits/stdc++.h>
using namespace std;
int phi[40005];
int qGCD(int a, int b) {
	if(a == 0) return b;
	if(b == 0) return a;
	if(!(a & 1) && !(b & 1))
		return qGCD(a >> 1, b >> 1) << 1;
	else if(!(b & 1))
		return qGCD(a, b >> 1);
	else if(!(a & 1))
		return qGCD(a >> 1, b);
	else
		return qGCD(abs(a - b), min(a, b));
}
void euler(int n) {
	for (int i=1; i<=n; i++) phi[i]=i;
	for (int i=2; i<=n; i++) {
		if (phi[i]==i) {
			for (int j=i; j<=n; j+=i) {
				phi[j]=phi[j]/i*(i-1);
			}
		}
	}
}
int main() {
	int n;
	long long ans=0;
	cin>>n;
	if(n==1) {
		cout<<0;
		return 0; 
	}
	euler(n);
	for(int i=2; i<n; i++) {
		ans+=phi[i];
	}
	cout<<ans*2+3;
	return 0;
}
