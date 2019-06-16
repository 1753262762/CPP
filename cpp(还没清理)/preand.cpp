#include<bits/stdc++.h>
using namespace std;
int a[200010], n, m, k;
int main()
{
	freopen("preand.in", "r", stdin);
	freopen("preand.out", "w", stdout); 
	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; i ++) scanf("%d", &a[i]);
	while (m --)
	{
		long long ans = 0;
		scanf("%d", &k);
		for (int i = 0; i < k; i ++) ans += a[i];
		printf("%lld\n", ans); 
	}
	return 0;
}



