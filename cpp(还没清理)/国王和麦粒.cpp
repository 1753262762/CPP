#include<bits/stdc++.h>
using namespace std;
int main()
{
	char A[100];	
	int i, a[3000], c[3000];
	long long x = 1;
	for (int i = 1; i <= 62; i ++) x *= 2;
	sprintf(A, "%lld", x);
	int Len = strlen(A);
	for (i = Len - 1; i >= 0; i --) a[Len-1-i] = A[i] - '0';
	for (i = 0; i < Len; i ++) c[i] += a[i] * 4; 
	for (i = 0; i < Len; i ++)
		c[i+1] += c[i] / 10, c[i] = c[i] % 10;        
	if (c[i]) i ++;
	for (i = i - 1; i > 0; i --) cout << c[i];
	cout << c[0] - 1;  //个位数单独处理 2^b-1 
	return 0;
 } 


