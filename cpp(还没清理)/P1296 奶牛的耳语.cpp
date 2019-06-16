#include<bits/stdc++.h>
using namespace std;
int n,d,x[100005],sum=2,ans=0;
int main()
{
    cin>>n>>d;
    for(int i=1;i<=n;i++)cin>>x[i];
    sort(x+1,x+n+1);
    for(int i=1;i<=n;i++)for(int j=i+1;j<=n;j++)if(x[i]+d>=x[j])ans++;else break;
   	cout<<ans<<endl; 
}
