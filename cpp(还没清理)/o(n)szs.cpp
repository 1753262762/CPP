#include<bits/stdc++.h>
using namespace std;
#define MAX_N 10001
int main()
{
	//freopen("82-12.in","r",stdin);
	//freopen("82-12.out","w",stdout);
	int n,v[MAX_N],prime[MAX_N],m=0;
	cin>>n;
	memset(v,0,sizeof(v));
	memset(prime,10001,sizeof(prime));
	m=0;
	for(int i=2;i<=n;++i)
	{
		if(v[i]==0)
		{
			v[i]=i;
			prime[++m]=i;
		}
		for(int j=1;j<=m;++j)
		{
			if(prime[j]>v[i]||prime[j]>n/i)
			{
				break;
			}
			v[i*prime[j]]=prime[j];
		}
	}
	for(int i=1;i<=m;++i)
	{
		for(int j=i;j<=m;++j)
		{
			for(int k=j;k<=n;++k)
			{
				if(prime[i]+prime[j]+prime[k]==n)
				{
					printf("%d=%d+%d+%d\n",n,prime[i],prime[j],prime[k]);
				}
			}
		}
	}
	fclose(stdout);
	fclose(stdin);
	return 0;
}
