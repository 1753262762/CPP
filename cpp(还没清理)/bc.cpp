#include<bits/stdc++.h>
using namespace std;
long long n,m,hm[1001],ti[1001],fs[1001],qz[1001],bz[1001];
void read()
{
	long long maxbz=0;
	cin>>n>>m;
	for(int i=1; i<=n; ++i)
	{
		cin>>hm[i]>>ti[i]>>fs[i]>>bz[i];
		maxbz=max(maxbz,bz[i]);
	}
	for(int i=1; i<=n; ++i)
	{
		qz[i]=maxbz*fs[i]+bz[i];
	}
}
int main()
{
	long long dp[1001],zf[1001],zb[1001];
	read();
	for(int i=1; i<=m; ++i)
	{
		dp[i]=0;
	}
	for(int i=1; i<=n; ++i)
	{
		for(int v=m; v>=ti[i]; --v)
		{
			if(dp[v]<dp[v-ti[i]]+qz[i])
			{
				dp[v]=dp[v-ti[i]]+qz[i];
				zf[v]=zf[v-ti[i]]+fs[i];
				zb[v]=zb[v-ti[i]]+bz[i];
			}
		}
	}
	cout<<zf[m]<<" "<<zb[m];
	return 0;
}
