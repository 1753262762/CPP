#include<bits/stdc++.h>
using namespace std;
char a[1010],b[1010];
int n,i=0,j=0,ans1=0,ans2=0;
int main() {
	cin>>n>>a>>b;
	sort(a,a+n);
	sort(b,b+n);
	while(i<n&&j<n) {
		if(b[j]>=a[i]) {
			i++;
			j++;
		} else {
			j++;
			ans1++;
		}
	}
	i=0;
	j=0;
	while(i<n&&j<n) {
		if(b[j]>a[i]) {
			i++;
			j++;
			ans2++;
		} else {
			j++;
		}
	}
	cout<<ans1<<endl<<ans2;
	return 0;
}
