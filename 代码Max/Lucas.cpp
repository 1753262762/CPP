#include<bits/stdc++.h>
using namespace std;
long long n,m,p;
long long KSM(long long base,long long exp)
{
	long long result = 1;
	while (exp)
	{
		if (exp & 1)result = result*base%p;
		base =base*base%p;
		exp >>= 1;
	}
	return result;
}
long long C(long long n,long long m){
	if(m>n)return 0;
	long long a=1,b=1;
	for(long long i=n-m+1;i<=n;i++)a=a*i%p;
	for(long long i=2;i<=m;i++)b=b*i%p;
	return a*KSM(b,p-2)%p;
}
long long Lucas(long long n,long long m){
	int i,j;
	if(!m)return 1;
	else return(C(n%p,m%p)*Lucas(n/p,m/p))%p;
}
int main(){
	int t;
    scanf("%d",&t);
    for(register int i=1;i<=t;i++)
    {
        scanf("%lld%lld%lld",&n,&m,&p);
        printf("%lld\n",Lucas(n+m,m));
    }
    return 0;
}
