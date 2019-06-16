#include<bits/stdc++.h>
using namespace std;
long long pow(int a, int b, int c)
{
	long long ans = 1;
	a = a % c;
	while (b > 0)
	{
		if (b & 1) ans = (ans * a) % c; //��� b������ 
		a = (a * a) % c;  //�� a^2���� a 
		b >>= 1;
	 } 
	return ans % c;
}
int main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b,&c);
	printf("%lld", pow(a, b, c));
	return 0;
}


