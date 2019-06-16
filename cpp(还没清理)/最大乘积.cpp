#include<bits/stdc++.h>
using namespace std;
int n, sum, ans = 1, i = 2;
int main()
{
	scanf("%d", &n);
	while (sum < n)
	{
		sum += i;
		i ++;
	}
	int k = sum - n;
	if (k == 0)
	{
		for (int j = 2; j <= i - 1; j ++) 
			printf("%d ", j), ans *= j;
		printf("\n%d", ans);
	}
	if (k == 1)
	{
		for (int j = 2; j <= i - 1; j ++)
			printf("%d ", j), ans *= j;
		printf("\n%d", ans);
	}
	return 0;
}


