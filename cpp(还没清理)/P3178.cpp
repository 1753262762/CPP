#include<bits/stdc++.h>
using namespace std;
struct ccf
{
	int data;
	int lazy;
	int fath;
}tree[100001];
int main()
{
	int n,m,from,to,k,x,a;
	cin>>n>>m;
	for(int i=1; i<=n; ++i)
	{
		cin>>tree[i].data;
		tree[i].lazy=0;
	}
	for(int i=1; i<=n-1; ++i)
	{
		cin>>from>>to;
		tree[to].fath=from;
	}
	for(int i=1; i<=m; ++i)
	{
		cin>>k;
		if(k==1)
		{
			cin>>x>>a;
			tree[x].data+=a;
		}
		else if(k==2)
		{
			cin>>x>>a;
			tree[x].lazy+=a;
		}
		else if(k==3)
		{
			int ans=0;
			cin>>x;
			for(int j=1;; ++j)
			{
				ans+=tree[x].data;
				ans+=tree[x].lazy*j;
				if(x==1)
				{
					cout<<ans<<endl;
					break;
				}
				x=tree[x].fath;
			}
		}
	}
}
