#include<bits/stdc++.h>
using namespace std;
int n, k, ans;
void cal(int n, int k, int x)  //x��ʾ��һ�ηֳ������� 
{
	if (k == 1) {ans ++; return;}
	for (int i = x; i <= n / k; i ++)
		cal(n - i, k - 1, i); 
} 
int main()
{
	scanf("%d%d", &n, &k);
	cal(n, k, 1);
	printf("%d", ans);
	return 0;
 }
 
 
