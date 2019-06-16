#include<bits/stdc++.h>
using namespace std;
int a[1010], n;
int main()
{
    scanf("%d", &n);
    a[1] = 1;
    for (int i = 2; i <= n; i ++)
        if (i % 2 == 0)
        {
            for (int j = 1; j <= i / 2; j ++) 
				a[i] += a[j];
            a[i] ++;  //加上自己 
        }
        else a[i] = a[i-1];
    printf("%d", a[n]);
    return 0;
}


