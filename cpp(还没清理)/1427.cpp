#include<bits/stdc++.h>
using namespace std;
int a[110], n, i;
int main()
{
	while (scanf("%d", &n) == 1, n != 0) a[++i] = n;
	for ( ; i > 0; i --) printf("%d ", a[i]);
	return 0;
}
