#include<bits/stdc++.h>
using namespace std;
int n,sum;
struct weizi{
	int a,b,c,ans;
}x[30];
void dfs(int cur)
{
	if(cur>n)
    {
        sum++;
        if(sum>3) return;
        else
        {
            for(int i=1;i<=n;i++) cout<<x[i].ans;
            cout<<endl;
            return;
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(!x[i].a&&!x[i+cur].b&&!x[n+cur-i].c)
        {
            x[i].a=1;
            x[i+cur].b=1;
            x[n+cur-i].c=1;
            x[cur].ans=i;
            dfs(cur+1);
            x[i].a=0;
            x[i+cur].b=0;
            x[n+cur-i].c=0;
        }
    }
   
}
int main()
{
	cin>>n;
	dfs(1);
	cout<<sum<<endl;
	return 0;	
} 
