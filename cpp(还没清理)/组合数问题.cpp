#include<bits/stdc++.h>
using namespace std;
long long f[2010][2010], sum[2010][2010];  //要开long long
int t, k, n, m;   
int main()
{
	scanf("%d%d", &t, &k);
	for (int i = 0; i <= 2000; i ++) f[i][i] = f[i][0] = 1;  //初始化 
	for (int i = 1; i <= 2000; i ++)
		for (int j = 1; j <= 2000; j ++)
		{
			f[i][j] = (f[i-1][j] + f[i-1][j-1]) % k;
			sum[i][j] = sum[i][j-1] + sum[i-1][j] - sum[i-1][j-1];  //二维前缀和 
			if (f[i][j] == 0 && j <= i) sum[i][j] ++;
		}
	while (t --)
	{
		scanf("%d%d", &n, &m);
		printf("%d\n", sum[n][m]);
	}	
	return 0;
 }
 

