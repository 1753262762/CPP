#include<bits/stdc++.h>
using namespace std;
int main()
{
	deque<int>d;
	long long n,k,a;
	cin>>n>>k;
	for(int i=0;i<n;++i)
	{
		cin>>a;
		if(!d.empty()&&d.size()>=k)
		{
			d.pop_front();
		}
		while(!d.empty()&&d.back()<=a)
		{
			d.pop_back();
		}
		d.push_back(a);
		cout<<d.front()<<" ";
	}
	return 0;
}
