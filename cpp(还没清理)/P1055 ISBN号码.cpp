#include<bits/stdc++.h>
using namespace std;
int main()
{
	char a[11];
	short n=0;
	char s;
	for(int i=1;i<=3;i++)
	{
		while(((s=getchar())!=EOF)&&s!='-')
		{
			n++;
			a[n]=s;
			a[n]-='0';	
		}
	}
	cin>>a[10];
	int sum=0;
	for(int i=1;i<=9;i++)
	{
		sum+=a[i];
	}
	if(sum%11==a[10])
	{
		cout<<"Right";
	}
	else
	{
		cout<<a[1]<<'-'<<a[2]<<a[3]<<a[4]<<'-'<<a[5]<<a[6]<<a[7]<<a[8]<<a[9]<<'-'<<sum%11;
	}
	return 0;
}
