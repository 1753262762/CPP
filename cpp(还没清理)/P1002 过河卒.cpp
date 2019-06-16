#include<iostream>
#define ll long long
using namespace std;
int x[]= {0,-2,-1,1,2,2,1,-1,-2};
int y[]= {0,1,2,2,1,-1,-2,-2,-1};
int bx,by,mx,my;
long long ans;
long long f[35][35];
bool map[35][35];
int main() {
	cin>>bx>>by>>mx>>my;
	bx+=5;
	by+=5;
	mx+=5;
	my+=5;
	f[5][5]=1;
	map[mx][my]=1;
	for(register int i=1; i<=8; i++)
		map[ mx + x[i] ][ my + y[i] ]=1;
	for(int i=5; i<=bx; i++) {
		for(register int j=5; j<=by; j++) {
			if(map[i][j])continue;
			f[i][j]=max( f[i][j] , f[i-1][j] + f[i][j-1] );
		}
	}
	cout<<f[bx][by]<<endl;
	return 0;
}
