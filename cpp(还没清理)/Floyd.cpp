/*
	Name: return 0
	Copyright:
	Author:
	Date: 06/05/19 12:45
	Description:
*/
//Floyd
#include<bits/stdc++.h>
using namespace std;
#define inf 99999999
#define maxn 10005
int e[maxn][maxn],n,m,S;
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
		e[x][y]=min(e[x][y],z);
	}
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=n; j++) {
			for(int k=1; k<=n; k++) {
				if(e[j][i] < inf && e[i][k] < inf && e[j][k] > e[j][i] + e[i][k])
					e[j][k] = e[j][i] + e[i][k];
			}
		}
	}
	for(int i=1; i<=n; i++) {
		cout<<e[S][i]<<' ';
	}
	return 0;
}
