#include<bits/stdc++.h>
using namespace std;
#define inf 99999999
#define maxn 10005
int e[maxn][maxn],n,m,S,dis[maxn],book[maxn],u,v;
inline int read() {
	int x=0,k=1;
	char c=getchar();
	while(c<'0'||c>'9') {
		if(c=='-')k=-1;
		c=getchar();
	}
	while(c>='0'&&c<='9')x=(x<<3)+(x<<1)+(c^48),c=getchar();
	return x*k;
}
int main() {
	cin>>n>>m>>S;
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=n; j++) {
			if(i==j)e[i][j]=0;
			else e[i][j]=inf;
		}
	}
	for(int i=1; i<=m; i++) {
		int x,y,z;
		x=read();
		y=read();
		z=read();
		e[x][y]=z;
		//e[x][y]=min(e[x][y],z);
	}
	for(int i=1;i<=n;i++){
		dis[i]=e[1][i];
	} 
	for(int i=1;i<=n;i++){
		book[i]=0;
	}
	book[1]=1;
	int min;
	for(int i=1;i<=n-1;i++){
		min=inf;
		for(int j=1;j<=n;j++){
			if(book[j]==0&&dis[j]<min){
				min=dis[j];
				u=j;
			}
			book[u]=1;
			for(int b=1;b<=n;v++){
				if(e[u][v]<inf){
					if(dis[v]>dis[u]+e[u][v]){
						dis[v]=dis[u]+e[u][v];
					}
				}
			}
		}
	}
	for(int i=1; i<=n; i++) {
		cout<<e[S][i]<<' ';
	}
	return 0;
}
