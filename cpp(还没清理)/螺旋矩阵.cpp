#include<bits/stdc++.h>
using namespace std;
int a[110][110] = {1}, n, num = 1, i, j;
int main()
{ 
	scanf("%d", &n);
	while (num < n * n)
	{
		while (j < n - 1 && a[i][j+1] == 0) a[i][++j] = ++ num;   
		while (i < n - 1 && a[i+1][j] == 0) a[++i][j] = ++ num;   
		while (j > 0 && a[i][j-1] == 0) a[i][--j] = ++ num;  
		while (i > 0 && a[i-1][j] == 0) a[--i][j] = ++ num;  
	}
	for (i = 0; i < n; i ++)
	{
		for (j = 0; j < n; j ++)
			printf("%4d", a[i][j]);
    	printf("\n");
	}
	return 0;
}





