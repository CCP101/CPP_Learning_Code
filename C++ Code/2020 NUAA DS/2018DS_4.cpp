//2018数据结构第四题
#include<stdio.h>
#include<malloc.h>
typedef struct LNode{
	int data;
    LNode *next;
} *LinkList,LNode;
LinkList func(LinkList L)
{
	if(!L){return NULL;}
	LinkList A=(LinkList)malloc(sizeof(LNode));
	LinkList pre=L,p=L->next,rear=A;
	while(p)
	{
		if(p->data<0)
		{
			pre->next=p->next;
			rear->next=p;
			rear=p;
			p=pre->next;
		}
		else{
			pre=pre->next;
			p=p->next;
		}
	}
	rear->next=NULL;
	pre->next=A->next;
	free(A);
	return pre->next;
} 
int main()
{
	LinkList A= (LinkList) malloc(sizeof(LNode) );
	LinkList a= (LinkList) malloc(sizeof(LNode) );
	LinkList b= (LinkList) malloc(sizeof(LNode) );
	LinkList c= (LinkList) malloc(sizeof(LNode) );
	LinkList d= (LinkList) malloc(sizeof(LNode) );
	A->next=a;a->next=b;b->next=c;c->next=d;d->next=NULL;
	a->data=5;b->data=-3;c->data=6;d->data=-4;
	printf("A中元素：");
	LinkList p=A->next;
	while(p){
		printf("%d\t",p->data);p=p->next;
	}printf("\n");
	
	func(A);
	printf("A中元素：");
	p=A->next;
	while(p){
		printf("%d\t",p->data);p=p->next;
	}printf("\n");
}