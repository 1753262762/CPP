#include<bits/stdc++.h>
using namespace std;
int a[200010], sum[200010], n, ans = -10000;
int main()
{
	scanf("%d", &n);
	for(int i = 1; i <= n; i ++)
	{
		scanf("%d", &a[i]);
		sum[i] = max(a[i], sum[i-1] + a[i]);
		ans = max(sum[i], ans);
	}
	printf("%d", ans);
	return 0;
}


