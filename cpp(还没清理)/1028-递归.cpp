#include<bits/stdc++.h>
using namespace std;
int ans, n;
int cal(int x)
{
	ans ++;
	for (int i = 1; i <= x / 2; i ++) cal(i);
	return ans;
}
int main()
{
	scanf("%d", &n);
	printf("%d", ans);
	return 0;
 }
