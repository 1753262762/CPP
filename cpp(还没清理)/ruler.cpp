#include<bits/stdc++.h>
using namespace std;
int a[1000010], n, m, ans = 0x3f3f3f3f;
int main()
{
	freopen("ruler.in", "r", stdin);
	freopen("ruler.out", "w", stdout); 
	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; i ++) scanf("%d", &a[i]);
	for (int i = 0; i < n; i ++)
	{
		int sum = 0;
		for (int j = i; j < n; j ++)
			if (sum >= m) {ans = min(ans, j - i); break;}
				else sum += a[j];
	}
	printf("%d", ans);
	return 0;
}


