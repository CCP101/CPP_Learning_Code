//2016数据结构第四题 链表处理
/*
设L 为带头结点的单链表，元素值为整型。编写函数，删除L 中的重复结点（具
有相同元素值的结点只保留一个）。先给出算法思想，再写出程序代码。
*/
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
		while(q)//循环遍历
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