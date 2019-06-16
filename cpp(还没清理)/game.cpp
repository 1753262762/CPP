#include<bits/stdc++.h>
using namespace std;
int n, m;
int main()
{
	freopen("game9.in", "r", stdin);
	freopen("game9.out", "w", stdout);
    scanf("%d", &n);
    while (n --)
    {
        scanf("%d", &m);
        if (m & 1) printf("lost\n");
        else printf("wins\n");
    }
    return 0;
 }
