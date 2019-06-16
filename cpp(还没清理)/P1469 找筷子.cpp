#include<bits/stdc++.h>
using namespace std;
int x[100000000];
int main()
{
	int n,sum;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>sum;
		x[sum]++;
	}
	for(int i=1;i<=100000000;i++)
	{
		if(x[i]%2!=0)
		{
			cout<<i;
			break;
		}
	}
	return 0;
} 
