#include<bits/stdc++.h>
using namespace std;
int a[1000010];
int main()
{
	freopen("input.in", "r", stdin);
	freopen("input.out", "w", stdout);
	int n, i; scanf("%d", &n);
	for (i = 0; i < n; i ++) scanf("%d", &a[i]);
	printf("%d\n", n);
	for (i = 0; i < n; i ++) printf("%d ", a[i]);
	return 0;
}
