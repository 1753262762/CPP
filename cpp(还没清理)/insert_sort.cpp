#include<bits/stdc++.h>
using namespace std;
int a[100010], i, j, n, m;
void insert(int x)
{
	if (x < a[i-1])
	{
		for (j = i - 1; j >= 0 && a[j] > x; j --) 
			a[j+1] = a[j];    //平移 
		a[j+1] = x;           //插入 
	}
	else a[i] = x;
 }

int main()
{
	scanf("%d%d", &n, &a[0]);
	for (i = 1; i < n; i ++)  //从第 2个数开始
	{ 
		scanf("%d", &m); 
		insert(m);
	 } 
	for (i = 0; i < n; i ++) printf("%d ", a[i]);
	return 0;
}


