#include<bits/stdc++.h>
using namespace std;
struct node
{
	int index, score, rank;
} a[2010];
bool cmpscore(node x, node y)  //按成绩排序 
{
	return x.score > y.score;
}
bool cmpindex(node x, node y)  //按学号排序 
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
		a[i].rank = i;  //此时的a[]已按score排好序
	sort(a + 1, a + n + 1, cmpindex);
	for (int i = 1; i <= n; i ++)
		printf("%d\n", a[i].rank);	
	return 0;
}
