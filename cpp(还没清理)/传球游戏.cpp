#include<bits/stdc++.h>
using namespace std;
int f[50][50], n, m;
int main()
{
	scanf("%d%d", &n, &m);
	f[1][0] = 1;
	for (int i = 1; i <= m; i ++)
	{
		f[1][i] = f[2][i-1] + f[n][i-1];  //1��ͬѧ 
		for (int j = 2; j <= n - 1; j ++)
			f[j][i] = f[j-1][i-1] + f[j+1][i-1]; //2~n-1��ͬѧ 
		f[n][i] = f[1][i-1] + f[n-1][i-1];  //n��ͬѧ 
	}
	printf("%d", f[1][m]);
	return 0;
}


