#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int x[n];
	for(int i=1;i<=n;i++)
	{
		cin>>x[i];	
	}	
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if (x[i] < x[j])
			{
				swap(x[i],x[j]);
			}
		}
	}
	int ans=1,sum1=1,sum2=x[1];
	for(int i=1;i<=n;i++)
	{
		if(sum2!=x[i])
		{
			sum2=x[i];
			sum1++;
		}
	}
	if(sum1<2)
	{
		cout<<"NO";
		return 0;
	}
	while(1)
	{
		if(x[ans]<x[ans+1])
		{
			cout<<x[ans+1]<<endl;
			return 0;
		}
		ans++;
	}
	return 0;
}
