#include<bits/stdc++.h>
using namespace std;
int a[200010], n, m, l, r, k;
int main()
{
	freopen("difference.in", "r", stdin);
	freopen("difference.out", "w", stdout); 
	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; i ++) scanf("%d", &a[i]);
	while (m --)
	{
		scanf("%d%d%d", &l, &r, &k);
		for (int i = l; i <= r; i ++) a[i] += k;
	}
	for (int i = 0; i < n; i ++) printf("%d ", a[i]);
	return 0;
 } 
 

