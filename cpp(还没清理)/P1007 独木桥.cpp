#include<bits/stdc++.h>
using namespace std;
int main()
{
	int l,n,mi_n=0,ma_x=0;
	cin>>l>>n;
	for(int i=1;i<=n;i++)
	{
		int x;
		cin>>x;
		ma_x=max(ma_x,max(l-x+1,x));
        mi_n=max(mi_n,min(l-x+1,x));	
	}	
	cout<<mi_n<<' '<<ma_x; 
	return 0;	
} 

