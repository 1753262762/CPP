#include<iostream>
#include<algorithm>
using namespace std;
#define t int
#define st string
string s[25];
bool cmp(st a,st b)
{
    return a+b>b+a;
}
int main()
{
    t n;
    cin>>n;
    for(t i=0;i<n;i++)cin>>s[i];
    sort(s,s+n,cmp);
    for(t i=0;i<n;i++)cout<<s[i];
    return 0;
}
