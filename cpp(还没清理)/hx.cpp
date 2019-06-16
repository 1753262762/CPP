#include<bits/stdc++.h>
using namespace std;
#define _MAXN 20
struct dot
{
	int x;
	int y;
	void init(int m_x,int m_y)
	{
		x=m_x;
		y=m_y;
	}
} ln[_MAXN];
double dist(dot a,dot b)
{
	return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
}
bool jg[_MAXN];
double minx=0x3f3f3f,now=0;
int n;
void dfs(int k,int c)
{
	if(now>minx)
	{
		return;
	}
	if(c==n)
	{
		minx=now;
		return;
	}
	for(int i=1; i<=n; ++i)
	{
		if(jg[i])
		{
			jg[i]=0;
			now+=dist(ln[k],ln[i]);
			dfs(i,c+1);
			jg[i]=1;
			now-=dist(ln[k],ln[i]);
		}
	}
}
int main()
{
	cin>>n;
	for(int i=1; i<=n; ++i)
	{
		int x,y;
		cin>>x>>y;
		jg[i]=1;
		ln[i].init(x,y);
	}
	ln[0].init(0,0);
	dfs(0,0);
	printf("%.2f",minx);
	return 0;
}
