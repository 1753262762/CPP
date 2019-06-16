#include<iostream>
using namespace std;
#define MAX 1001
int fa[MAX];
struct ccf
{
	int x,y,t;
}road[100001];
void sort(int l,int r)
{
	if(l>=r)
	{
		return;
	}
	int i=l,j=r+1,bz=road[l].t;
	while(1)
	{
		while(road[i].t<bz)
		{
			++i;
			if(i==r)
			{
				break;
			}
		}
		while(road[j].t>bz)
		{
			--j;
			if(j==l)
			{
				break;
			}
		}
		if(i>=j)
		{
			break;
		}
		int temp=road[i].x;
		road[i].x=road[j].x;
		road[j].x=temp;
		temp=road[i].y;
		road[i].y=road[j].y;
		road[j].y=temp;
		temp=road[i].t;
		road[i].t=road[j].t;
		road[j].t=temp;
	}
	int temp=road[i].x;
	road[i].x=road[l].x;
	road[l].x=temp;
	temp=road[i].y;
	road[i].y=road[l].y;
	road[l].y=temp;
	temp=road[i].t;
	road[i].t=road[l].t;
	road[l].t=temp;
	sort(l,j-1);
	sort(j+1,r);
}
int find(int x)
{
    if(x==fa[x])
    {
        return x;
    }
    else
    {
        return fa[x]=find(fa[x]);
    }
}
void join(int x,int y)
{
    if(find(x)!=find(y))
    {
        fa[find(x)]=find(y);
    }
}
int main()
{
	int n,m,x,y,t,fl=1,zf;
	cin>>n>>m;
	for(int i=1;i<=n;++i)
	{
		fa[i]=i;
	}
	for(int i=0;i<m;++i)
	{
		cin>>road[i].x>>road[i].y>>road[i].t;
	}
	sort(0,m);
	for(int i=0;i<m;++i)
	{
		join(road[i].x,road[i].y);
		fl=1;
		zf=fa[1];
		for(int j=1;j<=n&&fl;++j)
		{
			if(zf!=fa[j])
			{
				fl=0;
			}
		}
		if(fl)
		{
			cout<<road[i].t;
			return 0;
		}
	}
	cout<<-1;
    return 0;
}
