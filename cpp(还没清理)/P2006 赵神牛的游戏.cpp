#include<bits/stdc++.h>
using namespace std;
bool x[1000][1000];
int dx1[13]= {2,0,-2,0,1,1,1,0,0,0,-1,-1,-1},dy1[13]= {0,2,0,-2,0,1,-1,1,0,-1,0,1,-1},dx2[25]= {-2,-2,-2,-2,-2,-1,-1,-1,-1,-1,0,0,0,0,0,1,1,1,1,1,2,2,2,2,2},dy2[25]= {-2,-1,0,1,2,-2,-1,0,1,2,-2,-1,0,1,2,-2,-1,0,1,2,-2,-1,0,1,2};
int main() {
	int n,m,k;
	cin>>n>>m>>k;
	for(int i=0; i<m; i++) {
		int x1,y1;
		cin>>x1>>y1;
		for(int j=0; j<13; j++)
			x[x1+dx1[j]][y1+dy1[j]]=1;
	}
	for(int i=0; i<k; i++) {
		int x2,y2;
		cin>>x2>>y2;
		for(int j=0; j<25; j++)x[x2+dx2[j]][y2+dy2[j]]=1;
	}
	int ans=0;
	for(int i=0; i<n; i++)for(int j=1; j<=n; j++)if(x[i][j]==0)ans++;
	cout<<ans;
	return 0;
}

