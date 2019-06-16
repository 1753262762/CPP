#include<bits/stdc++.h>
using namespace std;
int a[10010][4], n, x, y, i, j;
int main()
{ 
	scanf("%d", &n);
	for (i = 1; i <= n; i ++)
		for (j = 0; j < 4; j ++)
			scanf("%d", &a[i][j]);   //把地毯数据读入到一个 n ×4的二维数组 
    scanf("%d%d", &x, &y);
	for (i = n; i >= 1; i --)
		if (a[i][0] <= x && a[i][0] + a[i][2] >= x && a[i][1] <= y && a[i][1] + a[i][3] >= y)
		{
			printf("%d", i);    //如果地毯四个点把目标点覆盖住 
			return 0;
		}
	printf("-1");  //循环结束都没有结果，那一定是没有被覆盖住 
	return 0;
}



