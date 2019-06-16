#include<bits/stdc++.h>
using namespace std;
struct code {
	int c;
	int sum;
} x[10000];
bool cmp(code x,code y) {
	return x.sum>y.sum;
}
int main() {
	freopen("211-76.in","r",stdin);
	freopen("211-76.out","w",stdin);
	char a;
	while(cin>>a) {
		a=tolower(a);
		x[a].sum++;
		x[a].c=a;
	}
	sort(x+1,x+10000,cmp);
	for(int i=1; i<=10000; i++) {
		for(int j=i; j<=10000; j++) {
			if(x[i].c>x[j].c&&x[i].sum==x[j].sum) {
				swap(x[i],x[j]);
			}
		}
	}
	int ma_x=x[1].sum;
	cout<<ma_x<<endl;
	for(int i=1;; i++) {
		if(ma_x!=x[i].sum) {
			return 0;
		}
		cout<<char(x[i].c)<<endl;
	}
	return 0;
}
/*
Aaa aabc,
Dd?
EEEEE.
*/
