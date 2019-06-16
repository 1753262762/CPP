#include<bits/stdc++.h>
using namespace std;
string multi(string A, string B)
{
	string ans;
	int i, j, a[10010], b[10010], c[20010];
	int LA = A.size(), LB = B.size();
	for (i = LA - 1; i >= 0; i --) a[LA-1-i] = A[i] - '0';
	for (i = LB - 1; i >= 0; i --) b[LB-1-i] = B[i] - '0';
	for (i = 0; i < LA; i ++)
		for (j = 0; j < LB; j ++)
			c[i+j] += a[i] * b[j];    //对位乘 
	for (i = 0; i < LA + LB - 1; i ++)  //处理 c[]中的进位
		c[i+1] += c[i] / 10, c[i] = c[i] % 10;        
	if (c[i]) i ++;   //判断最高位是否进位 
	for (i = i - 1; i >= 0; i --) ans += c[i] + '0';
	return ans;	 
}

int main()
{
	string A, B;
	cin >> A >> B;
	cout << multi(A, B); 
	return 0;
 } 
 
