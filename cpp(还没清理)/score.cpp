#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("score.out","w",stdout);
	freopen("score.in","r",stdin);
	int f=0,n,m,k[10000],s[10000];
	cin>>n>>m;
	for(int i=0;i<n;++i)
	{
		cin>>k[i]>>s[i];
	}
	for(int i=0;i<n;++i)
	{
		for(int j=0;j<i;++j)
		{
			if(s[i]>s[j])
			{
				int temp=k[i];
				k[i]=k[j];
				k[j]=temp;
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}
	m=(m*1.5>n-1)?n-1:m*1.5;
	cout<<s[m]<<" ";
	for(int i=0;i<n;++i)
	{
		if(s[i]>=s[m])
		{
			++f;
		}
	}
	cout<<f<<endl;
	for(int i=0;i<f;++i)
	{
		for(int j=0;j<i;++j)
		{
			if(s[i]==s[j]&&k[i]<k[j])
			{
				int temp=k[i];
				k[i]=k[j];
				k[j]=temp;
			}
		}
	}
	for(int i=0;i<n;++i)
	{
		if(s[i]>=s[m])
		{
			cout<<k[i]<<" "<<s[i]<<endl;
		}
	}
	fclose(stdin);
  	fclose(stdout); 
	return 0;
}
