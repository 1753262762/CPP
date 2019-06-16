#include<bits/stdc++.h>
using namespace std;
int w[81];
int main()
{
	int s1,s2,s3,ans=0;
	cin>>s1>>s2>>s3;
	for(int i=1;i<=s1;i++)
		for(int j=1;j<=s2;j++)
			for(int k=1;k<=s3;k++)
			{
				int sum=i+j+k;
				w[sum]++;
			}
	for(int i=1;i<=81;i++)
	{
        if(w[i]>ans)ans=i;
    }
    cout<<ans;
	return 0;	
} 

