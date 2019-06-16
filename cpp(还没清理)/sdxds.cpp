#include<bits/stdc++.h>
using namespace std;
#define _N 40000
struct ccf
{
	int left ;
	int righ;
	int data;
	int lazy;
}tree[_N];
int a[_N];
void pushdown(int i)
{
	if(tree[i].lazy!=0)
	{
		tree[i<<1].lazy+=tree[i].lazy;
		tree[i<<1|1].lazy+=tree[i].lazy;
		tree[i].lazy=0;
		tree[i<<1].data+=tree[i<<1].lazy*(tree[i<<1].righ-tree[i<<1].left+1);
		tree[i<<1|1].data+=tree[i<<1|1].lazy*(tree[i<<1|1].righ-tree[i<<1|1].left+1);
	}
}
void build(int i,int l,int r)
{
	tree[i].lazy=0;
	tree[i].left=l;
	tree[i].righ=r;
	if(l==r)
	{
		tree[i].data=a[l];
		return;
	}
	int m=(l+r)>>1;
	build(i<<1,l,m);
	build(i<<1|1,m+1,r);
	tree[i].data=tree[i<<1].data+tree[i<<1|1].data;
}
void addlazy(int i,int l,int r,int x)
{
	if(tree[i].righ<l||tree[i].left>r)
	{
		return;
	}
	if(tree[i].left>=l&&tree[i].righ<=r)
	{
		tree[i].lazy+=x;
		tree[i].data+=x*(tree[i].righ-tree[i].left+1);
		return;
	}
	addlazy(i<<1,l,r,x);
	addlazy(i<<1|1,l,r,x);
}
void finddata(int i,)
void find
