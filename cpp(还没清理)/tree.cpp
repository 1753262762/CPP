#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *lc,*rc;
};
typedef node *tree;
void build(tree root){
	int x;
	cin>>x;
	if(root){
		root=new node;
		root->data=x;
		build(root->lc);
		build(root->rc);
	}
	else root =NULL;
}
void pre(tree root){
	if(root){
		cout<<root->data<<' ';
		pre(root->lc);
		pre(root->rc);
	}
}
void mid(tree root){
	if(root){
		mid(root->lc);
		cout<<root->data<<' ';
		mid(root->rc);
	}
}
void next(tree root){
	if(root){
		next(root->lc);
		next(root->rc);
		cout<<root->data<<' ';
	}
}
int main(){
	tree node1;
	build(node1);
	return 0;
}
