#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("coin.out","w",stdout);
	freopen("coin.in","r",stdin);
	int d=0,a=0,w=1,n;
	cin>>n;
	for(int i=0;i<n;++i)
	{
		a+=w;
		++d;
		if(d==w)
		{
			d=0;
			++w;
		}
	}
	cout<<a;
	fclose(stdin);
  	fclose(stdout); 
	return 0;
}
