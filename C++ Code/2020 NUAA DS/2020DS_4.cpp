#include<stdio.h> 
#include<malloc.h>
typedef struct LNode{
	int data;
    LNode *next;
} *LinkList,LNode;
bool deleteMid(LinkList L){
	if(!L||!L->next){
		return false;
	}
	LNode *slow=L,*fast=L->next->next,*p=NULL;
	while(fast&&fast->next){
		slow=slow->next;
		fast=fast->next->next;
	}
	p=slow->next;
	slow->next=slow->next->next;
	free(p);
	return true;
}
int main(){
	LinkList a= (LinkList) malloc(sizeof(LNode) );
	LinkList b= (LinkList) malloc(sizeof(LNode) );
	LinkList c= (LinkList) malloc(sizeof(LNode) );
	LinkList d= (LinkList) malloc(sizeof(LNode) );
	LinkList e= (LinkList) malloc(sizeof(LNode) );
	LinkList A= (LinkList) malloc(sizeof(LNode) );
	a->data=11;
	b->data=22;
	c->data=33;
	d->data=44;
	e->data=55;
	A->next=a;
	a->next=b;
	b->next=c;
	c->next=d;
	d->next=NULL;
	//e->next=NULL;
	for(LinkList p=A->next;p!=NULL;p=p->next)
	{
		printf("%d ",p->data);
	}printf("\n");
	deleteMid(A);
	for(LinkList p=A->next;p!=NULL;p=p->next)
	{
		printf("%d ",p->data);
	}
}