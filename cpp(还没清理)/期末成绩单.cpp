#include<bits/stdc++.h>
using namespace std;
struct node
{
	int index, score, rank;
} a[2010];
bool cmpscore(node x, node y)  //���ɼ����� 
{
	return x.score > y.score;
}
bool cmpindex(node x, node y)  //��ѧ������ 
{
	return x.index < y.index;
}

int main()
{
	int n; scanf("%d", &n);
	for (int i = 1; i <= n; i ++)
	{
		scanf("%d", &a[i].score);
		a[i].index = i;
	}
	sort(a + 1, a + n + 1, cmpscore);
	for (int i = 1; i <= n; i ++)
		a[i].rank = i;  //��ʱ��a[]�Ѱ�score�ź���
	sort(a + 1, a + n + 1, cmpindex);
	for (int i = 1; i <= n; i ++)
		printf("%d\n", a[i].rank);	
	return 0;
}
