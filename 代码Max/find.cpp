#include<bits/stdc++.h>
using namespace std;
int x[1000],n,w;
int found(int a,int b)
{
    int mid=a+(b-a)/2;
    if(a>b)
        return -1;
    else
    {
        if(x[mid]==w)
            return mid;
        else if(x[mid]>w)
            return found(a,mid-1);
         else
            return found(mid+1,b);
    }
}
int main(){
	cin>>n>>w;
	for(int i=1;i<=n;i++)cin>>x[i];
	cout<<found(1,n);
	return 0;
}

