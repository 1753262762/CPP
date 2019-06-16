#include<bits/stdc++.h>
using namespace std;
int t, L, n, pos;
int main()
{
	scanf("%d", &t);
	while (t --)
	{
		scanf("%d%d", &L, &n);
		int mint = 0, maxt = 0;  //注意 mint的初值也为 0 
		for(int i = 0; i < n; i ++)
		{
			scanf("%d", &pos);
			int time = min(pos, L - pos);
			mint = max(mint, time);  //最短时间由那只最后掉落的蚂蚁决定 
			time = max(pos, L - pos);
			maxt = max(maxt, time);  //同上 
		}
		printf("%d %d\n", mint, maxt);
	}
	return 0;
}


