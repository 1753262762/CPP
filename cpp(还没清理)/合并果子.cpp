#include<bits/stdc++.h>
using namespace std;
const int INF = 0x3f3f3f3f; 
int a[20000], n, i, j, ans;  //注意数组开 10000不够！ 
int main()
{
	scanf("%d", &n);
	for (i = 0; i < n; i ++) scanf("%d", &a[i]);
	for (j = 0; j < n - 1; j ++)  //最后一堆不参与合并 
	{
		int minx = INF, pos, minx2 = INF, pos2;
		for (i = 0; i < n + j; i ++)  //这里要考虑数组长度增加 
			if (a[i] < minx)
			{
				minx2 = minx; pos2 = pos;
				minx = a[i]; pos = i;
			}
			else if (a[i] < minx2) minx2 = a[i], pos2 = i;
		ans += minx + minx2;
		a[n+j] = minx + minx2;    //两个最小数的和加入数组尾部 
		a[pos] = a[pos2] = INF;   //把这两个最小数踢出去 
	}
	printf("%d", ans);
	return 0; 
} 

 
