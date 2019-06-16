#include<bits/stdc++.h>
using namespace std;
int a[5000010], L, n, m, ans;
bool check(int x)  //检验跳跃距离 x是否合法 
{
	int cnt = 0, last = 0;  
	// cnt为移走的石子数量，last为上一个石子编号 
	for (int i = 1; i <= n; i ++)
		if (a[last] + x > a[i]) cnt ++;  
	//说明可以跳到 i，把 i移走换下一个 i 
			else last = i;  
	//无法移走,下一步就从 i起跳
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
