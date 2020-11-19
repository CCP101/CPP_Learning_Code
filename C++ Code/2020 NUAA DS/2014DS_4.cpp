//2014数据结构第四题 
#include<stdio.h>
#include<malloc.h>
typedef struct LNode{
	int data;
    LNode *next;
} *LinkList,LNode;

void fun(LinkList A){
	LinkList p = A->next;
	if(!p->next){return;}
	LinkList q = p->next; /* p 指向 A 的第一个结点 */
	LinkList B= (LinkList) malloc(sizeof(LNode) );
	B->next = NULL; /* 创建链表 B */
	while (p&&q)
	{
		p->next = q->next;
		q->next = B->next;
		B->next = q;
		if(p->next){
			p=p->next;
			q=p->next;
		}else{break;}
	}
	p->next = B->next; /* A 后接 B */
	free(B);
}
int main()
{
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
	d->next=e;
	e->next=NULL;
	for(LinkList p=A->next;p!=NULL;p=p->next)
	{
		printf("%d ",p->data);
	}printf("\n");
	fun(A);
	for(LinkList p=A->next;p!=NULL;p=p->next)
	{
		printf("%d ",p->data);
	}

}