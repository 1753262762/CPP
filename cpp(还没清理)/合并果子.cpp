#include<bits/stdc++.h>
using namespace std;
const int INF = 0x3f3f3f3f; 
int a[20000], n, i, j, ans;  //ע�����鿪 10000������ 
int main()
{
	scanf("%d", &n);
	for (i = 0; i < n; i ++) scanf("%d", &a[i]);
	for (j = 0; j < n - 1; j ++)  //���һ�Ѳ�����ϲ� 
	{
		int minx = INF, pos, minx2 = INF, pos2;
		for (i = 0; i < n + j; i ++)  //����Ҫ�������鳤������ 
			if (a[i] < minx)
			{
				minx2 = minx; pos2 = pos;
				minx = a[i]; pos = i;
			}
			else if (a[i] < minx2) minx2 = a[i], pos2 = i;
		ans += minx + minx2;
		a[n+j] = minx + minx2;    //������С���ĺͼ�������β�� 
		a[pos] = a[pos2] = INF;   //����������С���߳�ȥ 
	}
	printf("%d", ans);
	return 0; 
} 

 
