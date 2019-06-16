#include<bits/stdc++.h>
using namespace std;
#define _MAX_N 1001
#define _MAX_N2 100001
int at[_MAX_N][_MAX_N],n,num[_MAX_N2],top=0,dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};
bool dt[_MAX_N][_MAX_N];
int bfs(int bex,int bey)
{
	if(at[bex][bey])
	{
		return num[at[bex][bey]];
	}
	int ans=1;
	queue<int>qx,qy;
	qx.push(bex);
	qy.push(bey);
	at[bex][bey]=top;
	while(!qx.empty())
	{
		int ax=qx.front(),ay=qy.front();
		qx.pop();
		qy.pop();
		for(int i=0;i<4;++i)
		{
			int tx=ax+dx[i],ty=ay+dy[i];
			if(0<=tx&&tx<=n-1&&0<=ty&&ty<=n-1&&dt[ax][ay]^dt[tx][ty]&&!at[tx][ty])
			{
				qx.push(tx);
				qy.push(ty);
				at[tx][ty]=top;
				++ans;
			}
		}
	}
	return ans;
}
int main()
{
	freopen("01.in","r",stdin);
	freopen("01.out","w",stdout);
	int bex,bey,m;
	char c;
	cin>>n>>m;
	for(int i=0;i<n;++i)
	{
		for(int j=0;j<n;++j)
		{
			cin>>c;
			dt[i][j]=c-'0';
			at[i][j]=0;
		}
	}
	for(int i=0;i<m;++i)
	{
		scanf("%d %d",&bex,&bey);
		--bex;
		--bey;
		++top;
		printf("%d\n",num[top]=bfs(bex,bey));
	}
	return 0;
}
