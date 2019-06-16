#include<bits/stdc++.h>
using namespace std;
int num[10010], flag[10010], n, i, a, b, c, ans;
int main()
{
	freopen("count9.in", "r", stdin);
	freopen("count9.out", "w", stdout);
	scanf("%d", &n);
	for (i = 0; i < n; i ++) scanf("%d", &num[i]);
	sort(num, num + n);
	for (a = 0; a < n; a ++)
		for (b = a + 1; b < n; b ++)
			for (c = b + 1; c < n; c ++)
				if (num[a] + num[b] == num[c] && !flag[c])
					{ans ++; flag[c] = 1;}
	printf("%d", ans);
	return 0;
}
