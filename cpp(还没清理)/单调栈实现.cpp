#include<bits/stdc++.h>
using namespace std;
struct mb
{
	int id;
	int data;
};
int main()
{
	stack<mb>s;
	mb a;
	int n,an=0,ans[500001];
	cin>>n;
	for(int i=1;i<=n;++i)
	{
		cin>>a.data;
		a.id=i;
		ans[i]=0;
		while(!s.empty()&&s.top().data<a.data)
		{
			ans[s.top().id]=a.id-s.top().id;
			s.pop();
		}
		s.push(a);
	}
	while(!s.empty())
	{
		ans[s.top().id]=n-s.top().id;
		s.pop();
	}
	for(int i=1;i<=n;++i)
	{
		an+=ans[i];
		cout<<endl<<ans[i];
	}
	cout<<endl<<an;
	return 0;
}
