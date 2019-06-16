#include<bits/stdc++.h>
using namespace std;
int n, pos, ans; // pos记录上场比赛的结束时间 
struct match
{
	int a, b;   //开始和结束时间 
} m[1000010];
bool cmp(match x, match y)
{
	return x.b < y.b;  //结束时间早的靠前 
}
int main()
{
	scanf("%d", &n);
	for (int i = 0; i < n; i ++) scanf("%d%d", &m[i].a, &m[i].b);
	sort(m, m + n, cmp);
	for (int i = 0; i < n; i ++)
		if (pos <= m[i].a) {pos = m[i].b; ans ++;} //更新 pos 
	printf("%d", ans);
	return 0;
 } 
