#include<bits/stdc++.h>
using namespace std;
int a[5000010], L, n, m, ans;
bool check(int x)  //������Ծ���� x�Ƿ�Ϸ� 
{
	int cnt = 0, last = 0;  
	// cntΪ���ߵ�ʯ��������lastΪ��һ��ʯ�ӱ�� 
	for (int i = 1; i <= n; i ++)
		if (a[last] + x > a[i]) cnt ++;  
	//˵���������� i���� i���߻���һ�� i 
			else last = i;  
	//�޷�����,��һ���ʹ� i����
	return cnt <= m;
 } 
 
int main()
{
	scanf("%d%d%d", &L, &n, &m);
	for (int i = 1; i <= n; i ++)
		scanf("%d", &a[i]);
	a[n+1] = L;
	int l = 1, r = L;
	while (l < r)
	{
		int mid = (l + r) / 2;
		if (check(mid)) ans = mid, l = mid + 1;
			else r = mid;
	}
	printf("%d", ans);
	return 0;
}
