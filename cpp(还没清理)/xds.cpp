#include<bits/stdc++.h>
using namespace std;
struct ccf
{
	long long left;
	long long righ;
	long long data;
	long long lazy;
} tree[500000];
long long a[500000];
void pushdown(long long i)
{
	if(tree[i].lazy!=0)
	{
		tree[i<<1].lazy+=tree[i].lazy;
		tree[i<<1|1].lazy+=tree[i].lazy;
		long long m=(tree[i].left+tree[i].righ)>>1;
		tree[i<<1].data+=tree[i].lazy*(m-tree[i<<1].left+1);
		tree[i<<1|1].data+=tree[i].lazy*(tree[i<<1|1].righ-m);
		tree[i].lazy=0;
	}
}
void molify(long long i,long long l,long long r,long long k)
{
	if(tree[i].left>=l&&tree[i].righ<=r)
	{
		tree[i].data+=k*(tree[i].righ-tree[i].left+1);
		tree[i].lazy+=k;
		return;
	}
	pushdown(i);
	if(tree[i<<1].righ>=l)
	{
		molify(i<<1,l,r,k);
	}
	if(tree[i<<1|1].left<=r)
	{
		molify(i<<1|1,l,r,k);
	}
	tree[i].data=tree[i<<1].data+tree[i<<1|1].data;
}
void build(long long i,long long l,long long r)
{
	tree[i].lazy=0;
	tree[i].left=l;
	tree[i].righ=r;
	if(l==r)
	{
		tree[i].data=a[l];
		return;
	}
	long long m=(l+r)>>1;
	build(i<<1,l,m);
	build(i<<1|1,m+1,r);
	tree[i].data=tree[i<<1].data+tree[i<<1|1].data;
}
long long quety(long long i,long long l,long long r)
{
	if(tree[i].left>=l&&tree[i].righ<=r)
	{
		return tree[i].data;
	}
	long long  ans=0;
	pushdown(i);
	if(tree[i<<1].righ>=l)
	{
		ans+=quety(i<<1,l,r);
	}
	if(tree[i<<1|1].left<=r)
	{
		ans+=quety(i<<1|1,l,r);
	}
	return ans;
}
int main()
{
	long long n,m,p,x,y,k;
	cin>>n>>m;
	for(long long i=1; i<=n; ++i)
	{
		scanf("%d",&a[i]);
	}
	build(1,1,n);
	for(long long i=0; i<m; ++i)
	{
		cin>>p;
		if(p==1)
		{
			scanf("%d %d %d",&x,&y,&k);
			molify(1,x,y,k);
		}
		else if(p==2)
		{
			scanf("%d %d",&x,&y);
			printf("%d\n",quety(1,x,y));
		}
	}
}
