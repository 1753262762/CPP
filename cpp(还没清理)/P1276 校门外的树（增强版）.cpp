#include<bits/stdc++.h>
using namespace std;
int tree[10005],l,n,cnt,ans;
int main() {
	cin>>l>>n;
	memset(tree, 1, sizeof(tree));
	while (n--) {
		bool sf;
		int c,d;
		cin>>sf>>c>>d;
		if (!sf) {
			for (int i=c; i<=d; i++) {
				if (tree[i] == 2) {
					++cnt;
				}
				tree[i] = 0;
			}
		} else {
			for (int i=c; i<=d; i++) {
				if (!tree[i]) {
					tree[i] = 2;
				}
			}
		}
	}
	for (int i=0; i<=l; i++) {
		if (tree[i]==2) {
			ans++;
		}
	}
	cout<<ans<<endl;
	cout<<cnt<<endl;
	return 0;
}
