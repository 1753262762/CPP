#include<bits/stdc++.h>
using namespace std;
int f[210][10], n, k;
int main()
{
	scanf("%d%d", &n, &k);
	for (int i = 1; i <= n; i ++) f[i][1] = 1;  //³õÊ¼»¯ 
	for (int i = 2; i <= n; i ++)
		for (int j = 2; j <= k; j ++)
			if (j <= i) f[i][j] = f[i-1][j-1] + f[i-j][j]; 
	printf("%d", f[n][k]);
	return 0;
 }
 

