#include<bits/stdc++.h>
using namespace std;
int n, a, k, ans;
int main()
{
	scanf("%d", &n);
	for (int i = 1; i <= n; i ++)
	{
		scanf("%d%d", &a, &k);
		for (int j = 1; j <= k; j ++)
		ans ^= a * j;  // 利用异或的特性 
	}
	printf("%d", ans);
	return 0;
 } 
 

