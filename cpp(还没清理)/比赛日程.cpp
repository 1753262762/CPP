#include<bits/stdc++.h>
using namespace std;
int n, pos, ans; // pos��¼�ϳ������Ľ���ʱ�� 
struct match
{
	int a, b;   //��ʼ�ͽ���ʱ�� 
} m[1000010];
bool cmp(match x, match y)
{
	return x.b < y.b;  //����ʱ����Ŀ�ǰ 
}
int main()
{
	scanf("%d", &n);
	for (int i = 0; i < n; i ++) scanf("%d%d", &m[i].a, &m[i].b);
	sort(m, m + n, cmp);
	for (int i = 0; i < n; i ++)
		if (pos <= m[i].a) {pos = m[i].b; ans ++;} //���� pos 
	printf("%d", ans);
	return 0;
 } 
