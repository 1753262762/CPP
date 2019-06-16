#include<bits/stdc++.h>
using namespace std;
#define _fh <
int node[10000],top=0;
void push(int x)
{
	++top;
	int at=top;
	node[at]=x;
	while(at!=1&&node[at] _fh node[at/2])
	{
		int temp=node[at];
		node[at]=node[at/2];
		node[at/2]=temp;
		at/=2;
	}
}
void dele(int x)
{
	int at=top;
	--top;
	node[x]=node[at];
	while(at*2<=top&&(!node[at] _fh node[at*2]||!node[at] _fh node[at*2+1]))
	{
		int sc=at*2; 
		if(sc+1<=top&&node[sc] _fh node[sc+1])
		{
			++sc;
		}
		if(!node[at] _fh node[sc])
		{	
			int temp=node[at];
			node[at]=node[sc];
			node[sc]=temp;
		}
		at=sc;
	}
}
int main()
{
	int n,x;
	cin>>n;
	for(int i=0;i<n;++i)
	{
		cin>>x;
		push(x);
	}
	for(int i=0;i<n;++i)
	{
		cout<<node[1]<<" ";
		dele(1);
	}
	return 0;
}
