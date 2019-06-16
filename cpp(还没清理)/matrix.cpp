#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("matrix.out","w",stdout);
	freopen("matrix.in","r",stdin);
	int n,x,y,a[102][102],nx=1,ny=1,f=0,t,dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};
	cin>>n>>x>>y;
	for(int i=0;i<=n+1;++i)
	{
		for(int j=0;j<=n+1;++j)
		{
			a[i][j]=0;
		}
	}
	for(int i=0;i<n*n;++i)
	{
		t=1;
		a[nx][ny]=i+1;
		if(a[nx+dx[f]][ny+dy[f]]==0)
		{
			nx=nx+dx[f];
			ny=ny+dy[f];
		}
		else
		{
			++f;
			if(f==4)
			{
				f=0;
			}
			nx=nx+dx[f];
			ny=ny+dy[f];
		}
	}
	cout<<a[x][y];
	fclose(stdin);
  	fclose(stdout); 
}
	
