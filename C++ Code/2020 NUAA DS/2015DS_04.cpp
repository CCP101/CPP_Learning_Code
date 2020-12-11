//2015数据结构第四题 链表处理
/*
设一个带头结点的单链表L，数据元素为整数，编写函数，通过调整该链表的
结点指针，对该链表进行简单选择排序（元素值从小到大）。
先给出算法思想，再写相应代码。
*/
#include<stdio.h>
#include<malloc.h>
typedef struct LNode{
	int data;
    LNode *next;
} *LinkList,LNode;

void ListSort(LinkList A){
	LinkList B= (LinkList) malloc(sizeof(LNode) );
	B->next=NULL;
	LinkList pre=A,maxpre=A,p=A->next,max=A->next;
	while(A->next)
	{
		pre=A;maxpre=A;p=A->next;max=A->next;
		while(p){
			if(p->data>max->data){
				maxpre=pre;max=p;
			}
			pre=pre->next;
			p=p->next;
		}
		maxpre->next=max->next;
		max->next=B->next;
		B->next=max; //每一趟找出最大的元素拼接到B
	}
	A->next=B->next;
	free(B);
}
int main()
{
	LinkList a= (LinkList) malloc(sizeof(LNode) );
	LinkList b= (LinkList) malloc(sizeof(LNode) );
	LinkList c= (LinkList) malloc(sizeof(LNode) );
	LinkList d= (LinkList) malloc(sizeof(LNode) );
	LinkList A= (LinkList) malloc(sizeof(LNode) );
	a->data=4;
	b->data=3;
	c->data=5;
	d->data=2;
	A->next=a;
	a->next=b;
	b->next=c;
	c->next=d;
	d->next=NULL;
	for(LinkList p=A->next;p!=NULL;p=p->next)
	{
		printf("%d ",p->data);
	}printf("\n");
	ListSort(A);
	for(LinkList p=A->next;p!=NULL;p=p->next)
	{
		printf("%d ",p->data);
	}

}