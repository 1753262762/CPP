#include<bits/stdc++.h>
using namespace std;
string subtr(string A, string B)
{
	string ans;
	int i, j = 0, a[10010], b[10010], c[10010];
	int LA = A.size(), LB = B.size();
	if (LA < LB || ((LA == LB) && (A < B)))
	{
		ans = A; A = B; B = ans;
		ans = "-";    //处理差可能为负数
	 }
	for (i = LA - 1; i >= 0; i --) a[LA-1-i] = A[i] - '0';
	for (i = LB - 1; i >= 0; i --) b[LB-1-i] = B[i] - '0';
	while (j < LA || j < LB)
	{
		if (a[j] < b[j]) {a[j] += 10, a[j+1] --;}   //借位 
		c[j] = a[j] - b[j];
		j ++;
	}
	while (!c[j] && j >= 1) j --;   //清理高位零 
	for ( ; j >= 0; j -- ) ans += c[j] + '0';
	return ans;
 }
 
int main()
{
	string A, B;
	cin >> A >> B;
	cout << subtr(A, B);
	return 0;
 } 
 
