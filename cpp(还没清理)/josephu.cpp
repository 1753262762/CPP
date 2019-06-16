#include<bits/stdc++.h>
using namespace std;
int a[200010], n, m, i, j, ans;  
int main()
{ 
	freopen("josephu.in", "r", stdin);
	freopen("josephu.out", "w", stdout);
	scanf("%d%d", &n, &m);
	while (ans < n)
	{
		i ++; if (i == n + 1) i = 1; 
		if (!a[i]) j ++;
		if (j == m) 
		{
			a[i] = 1; 
			ans ++;
			j = 0;
		}
	}
	printf("%d", i);
	return 0;
}


