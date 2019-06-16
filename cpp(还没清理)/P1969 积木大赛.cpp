#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,x[100005];
ll ans=0;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
	{
		cin>>x[i];
		if(i>=2)if(x[i]>x[i-1])ans+=x[i]-x[i-1];	
	}
    cout<<ans+x[1];
    return 0;
}
