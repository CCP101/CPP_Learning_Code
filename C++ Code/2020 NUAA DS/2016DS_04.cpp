//2016数据结构第四题 
#include<stdio.h>
#include<malloc.h>
typedef struct LNode{
	int data;
    LNode *next;
} *LinkList,LNode;
void del(LinkList L)
{
	LinkList p=L->next,q=NULL,pre=NULL;
	if(!p){return;}
	while(p){
		pre=p;q=p->next;
		while(q)
		{
			if(p->data==q->data)
			{
				pre->next=q->next;
				free(q);
				q=pre->next;
			}
			else{
				pre=pre->next;
				q=q->next;
			}
		}
		p=p->next;
	}
}
int main()
{
	LinkList a= (LinkList) malloc(sizeof(LNode) );
	LinkList b= (LinkList) malloc(sizeof(LNode) );
	LinkList c= (LinkList) malloc(sizeof(LNode) );
	LinkList d= (LinkList) malloc(sizeof(LNode) );
	LinkList A= (LinkList) malloc(sizeof(LNode) );
	a->data=11;
	b->data=22;
	c->data=11;
	d->data=33;
	A->next=a;
	a->next=b;
	b->next=c;
	c->next=d;
	d->next=NULL;
	for(LinkList p=A->next;p!=NULL;p=p->next)
	{
		printf("%d ",p->data);
	}printf("\n");
	del(A);
	for(LinkList p=A->next;p!=NULL;p=p->next)
	{
		printf("%d ",p->data);
	}

}