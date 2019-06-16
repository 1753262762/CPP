#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x[4];
	cin>>x[0]>>x[1]>>x[2];	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(x[i]<x[j])swap(x[i],x[j]);
		}
	}
	char A,B,C;
	cin>>A>>B>>C;
	cout<<x[A-'A']<<" "<<x[B-'A']<<" "<<x[C-'A'];
	return 0;
} 
