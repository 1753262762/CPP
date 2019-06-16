#include<bits/stdc++.h>
#define NMAX 100010
using namespace std;
int n, m;
long long num[NMAX];
struct node {
	long long l, r, data, lazy;
} Tree[NMAX << 2];
void build(long long left, long long right, long long pos) {
	Tree[pos].l = left;
	Tree[pos].r = right;
	if (left == right) {
		Tree[pos].data = num[left];
		return;
	}
	long long mid = (left + right) >> 1;
	build(left, mid, pos << 1);
	build(mid + 1, right, pos << 1 | 1);
	Tree[pos].data = Tree[pos << 1].data + Tree[pos << 1 | 1].data;
}
void putdown(long long pos) {
	if (Tree[pos].lazy) {
		Tree[pos << 1].data += Tree[pos].lazy * (Tree[pos << 1].r - Tree[pos << 1].l + 1);
		Tree[pos << 1 | 1].data += Tree[pos].lazy * (Tree[pos << 1 | 1].r - Tree[pos << 1 | 1].l + 1);
		Tree[pos << 1].lazy += Tree[pos].lazy;
		Tree[pos << 1 | 1].lazy += Tree[pos].lazy;
		Tree[pos].lazy = 0;
	}
}
void change(long long left, long long right, long long x, long long pos) {
	if (Tree[pos].l >= left && Tree[pos].r <= right) {
		Tree[pos].data += x * (Tree[pos].r - Tree[pos].l + 1);
		Tree[pos].lazy += x;
		return;
	}
	putdown(pos);
	if (Tree[pos << 1].r >= left) change(left, right, x, pos << 1);
	if (Tree[pos << 1 | 1].l <= right) change(left, right, x, pos << 1 | 1);
	Tree[pos].data = Tree[pos << 1].data + Tree[pos << 1 | 1].data;
}
long long nFind(long long left, long long right, long long pos) {
	if (Tree[pos].l >= left && Tree[pos].r <= right) return Tree[pos].data;
	putdown(pos);
	long long ans = 0;
	if (Tree[pos << 1].r >= left) ans += nFind(left, right, pos << 1);
	if (Tree[pos << 1 | 1].l <= right) ans += nFind(left, right, pos << 1 | 1);
	return ans;
}
int main() {
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; ++i) scanf("%lld", &num[i]);
	build(1, n, 1);
	while (m--) {
		int type;
		scanf("%d", &type);
		if (type == 1) {
			long long x, y, k;
			scanf("%lld%lld%lld", &x, &y, &k);
			change(x, y, k, 1);
		} else {
			long long x, y;
			scanf("%lld%lld", &x, &y);
			printf("%lld\n", nFind(x, y, 1));
		}
	}
	return 0;
}
