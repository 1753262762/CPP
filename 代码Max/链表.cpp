#include<bits/stdc++.h>
using namespace std;
struct node {
	int data;
	node *next;
};
void creat(int x) {
	node *p,*q,*head;
	p=(node *) malloc(sizeof(node));
	p->data=x;
	p->next=NULL;
	if(head==NULL)head=p;
	else q->next=p;
	q=p;
	//free(p);
}
int main() {
	int n,x;
	cin>>n;
	while(n--) {
		cin>>x;
		creat(x); 
	}
	node *t;
	while (t!=NULL){
		printf("%d ",t->data);
		t=t->next;
	}
	return 0;
}
