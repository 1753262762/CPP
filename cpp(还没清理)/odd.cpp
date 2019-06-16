#include<bits/stdc++.h>
using namespace std;
char s[100];
int main()
{
	freopen("odd9.in", "r", stdin);
	freopen("odd9.out", "w", stdout); 
    int n; scanf("%d",&n);
    while (n --)
    {
    	cin >> s;
    	if (s[strlen(s)-1] % 2 == 0) printf("even\n");
        	else printf("odd\n");	
    }
    return 0;
}
