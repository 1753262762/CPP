#include<bits/stdc++.h>
using namespace std;
int n, ans;
int main()
{
	scanf("%d", &n);
	while (n > 0) {n /= 2, ans ++;}
	printf("%d", ans);
	return 0;
}
