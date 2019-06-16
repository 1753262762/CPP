#include<iostream> 
using namespace std;
int gcd(long long a, long long b)
{
    long long Rem;
    while(b > 0)
    {
        Rem = a % b;
        a = b;
        b = Rem;
    }
    return a;
} 
int main()
{
    long long n,m,x[1000000000];
    cin>>n>>m;
    long long p=gcd(n,m);
    x[1]=1;
    x[2]=1;
    for(int i=3;i<=p;i++)x[i]=(x[i-1]+x[i-2])%100000000;
    cout<<x[p]<<endl;
    return 0;
}
