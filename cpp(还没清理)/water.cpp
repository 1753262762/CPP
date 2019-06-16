#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("water.out","w",stdout);
	freopen("water.in","r",stdin);
	int m,n,w[10001],a=0,s=0;
	cin>>n>>m;
	for(int i=0;i<n;++i)
	{
		cin>>w[i];
	}
	while(s<n)
	{
		for(int i=0;i<m;++i)
		{
			for(int j=i;j<n;++j)
			{
				if(w[i]<w[j])
				{
					int temp=w[i];
					w[i]=w[j];
					w[j]=temp;
				}
			}
		}
		for(int i=0;i<m;++i)
		{
			--w[i];
			if(w[i]==0)
			{
				++s;
			}
		}
		++a;
	}
	cout<<a;
	fclose(stdin);
  	fclose(stdout); 
	return 0;
}
