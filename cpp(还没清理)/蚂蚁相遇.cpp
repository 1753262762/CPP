#include<bits/stdc++.h>
using namespace std;
int t, L, n, pos;
int main()
{
	scanf("%d", &t);
	while (t --)
	{
		scanf("%d%d", &L, &n);
		int mint = 0, maxt = 0;  //ע�� mint�ĳ�ֵҲΪ 0 
		for(int i = 0; i < n; i ++)
		{
			scanf("%d", &pos);
			int time = min(pos, L - pos);
			mint = max(mint, time);  //���ʱ������ֻ����������Ͼ��� 
			time = max(pos, L - pos);
			maxt = max(maxt, time);  //ͬ�� 
		}
		printf("%d %d\n", mint, maxt);
	}
	return 0;
}


