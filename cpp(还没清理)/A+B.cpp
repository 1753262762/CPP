#include<bits/stdc++.h>
using namespace std;
string add(string A, string B)
{
	string ans;
	int i, a[10010], b[10010], c[10010];
	int LA = A.size(), LB = B.size(); 
	for (i = LA - 1; i >= 0; i --) a[LA-1-i] = A[i] - '0';
	for (i = LB - 1; i >= 0; i --) b[LB-1-i] = B[i] - '0';
	for (i = 0; i < max(LA, LB); i ++)
	{
		c[i+1] = (a[i] + b[i] + c[i]) / 10;   //���λ��λ 
		c[i] = (a[i] + b[i] + c[i]) % 10;   //��λ�����µĲ��� 
	}
	if (c[i]) i ++;   //�ж����λ�Ƿ��н�λ
	for (i = i - 1; i >= 0; i --) ans += c[i] + '0';
	return ans;
 }
 
int main()
{
	string A, B;
	cin >> A >> B;
	cout << add(A, B);
	return 0;
 } 
