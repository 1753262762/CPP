#include<bits/stdc++.h>
using namespace std;
int a[1000010], n;
int main()
{
	freopen("second.in", "r", stdin);
	freopen("second.out", "w", stdout);
	scanf("%d", &n);
	for (int i = 0; i < n; i ++) scanf("%d", &a[i]);
	sort(a, a + n);
	printf("%d %d", a[0], a[1]);
	return 0;
}


