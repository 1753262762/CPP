#include<bits/stdc++.h>
using namespace std;
int f[50][50], n, m;
int main()
{
	scanf("%d%d", &n, &m);
	f[1][0] = 1;
	for (int i = 1; i <= m; i ++)
	{
		f[1][i] = f[2][i-1] + f[n][i-1];  //1号同学 
		for (int j = 2; j <= n - 1; j ++)
			f[j][i] = f[j-1][i-1] + f[j+1][i-1]; //2~n-1号同学 
		f[n][i] = f[1][i-1] + f[n-1][i-1];  //n号同学 
	}
	printf("%d", f[1][m]);
	return 0;
}


