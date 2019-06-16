#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("ratio.out","w",stdout);
	freopen("ratio.in","r",stdin);
	float a,b,l,aa=101,ab=1;
	bool t;
	cin>>a>>b>>l;
	for(float ba=1;ba<=l;++ba)
	{
		for(float bb=1;bb<=l;++bb)
		{	
			if(ba/bb>=a/b&&(ba/bb-a/b)<(aa/ab-a/b))
			{
				t=1;
				for(int i=2;i<=ba&&i<=bb&&t;++i)
				{
					if(((int)ba%i==0)&&((int)bb%i==0))
					{
						t=0;
					}
				}
				if(t)
				{
					aa=ba;
					ab=bb;
				}
			}
		}
	}
	cout<<aa<<" "<<ab;
	fclose(stdin);
  	fclose(stdout); 
	return 0;
}
