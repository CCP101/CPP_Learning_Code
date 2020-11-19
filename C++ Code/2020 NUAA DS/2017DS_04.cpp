//2017数据结构第四题 
#include<stdio.h>
#include<malloc.h>
typedef struct LNode{
	int data;
    LNode *next;
} *LinkList,LNode;
LinkList Merge(LinkList A,LinkList B)
{
	LinkList p=A->next,q=B->next,s=NULL;
	LinkList C=(LinkList)malloc(sizeof(LNode));
	C->next=NULL;
	while(p&&q){
		if(p->data==q->data)
		{
			s=p;
			p=p->next;
			s->next=C->next;
			C->next=s;
			s=q;
			q=q->next;
			free(s);
		}
		else{
		 if(p->data>q->data)
			{
				s=p;p=p->next;
			}
		else{
				s=q;q=q->next;
			}
			s->next=C->next;
			C->next=s;
		} 
	}
	while(p){
		s=p;p=p->next;
		s->next=C->next;
		C->next=s;
	}
	while(q){
		s=q;q=q->next;
		s->next=C->next;
		C->next=s;
	}
	return C;
}
int main()
{
	LinkList a1= (LinkList) malloc(sizeof(LNode) );
	LinkList b1= (LinkList) malloc(sizeof(LNode) );
	LinkList c1= (LinkList) malloc(sizeof(LNode) );
	LinkList d1= (LinkList) malloc(sizeof(LNode) );
	LinkList A= (LinkList) malloc(sizeof(LNode) );
	a1->data=4;//递减有序 
	b1->data=3;
	c1->data=2;
	d1->data=1;
	A->next=a1;
	a1->next=b1;
	b1->next=c1;
	c1->next=d1;
	d1->next=NULL;
	
	LinkList a2= (LinkList) malloc(sizeof(LNode) );
	LinkList b2= (LinkList) malloc(sizeof(LNode) );
	LinkList c2= (LinkList) malloc(sizeof(LNode) );
	LinkList d2= (LinkList) malloc(sizeof(LNode) );
	LinkList B= (LinkList) malloc(sizeof(LNode) );
	a2->data=9;//递减有序 
	b2->data=5;
	c2->data=3;
	d2->data=1;
	B->next=a2;
	a2->next=b2;
	b2->next=c2;
	c2->next=d2;
	d2->next=NULL;
	
	for(LinkList p=A->next;p!=NULL;p=p->next)
	{
		printf("%d\t",p->data);
	}printf("\n");
	for(LinkList p=B->next;p!=NULL;p=p->next)
	{
		printf("%d\t",p->data);
	}printf("\n");
	
	LinkList p=Merge(A,B);
	for(p=p->next;p!=NULL;p=p->next)
	{
		printf("%d\t",p->data);
	}printf("\n");
}