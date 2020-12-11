//2014数据结构第四题 链表处理
/*
设一个带头结点的单链表L，数据元素为（a1,a2,a3,a4,... ,an）,编写函数，
调整该链表，使得数据元素次序为（a1, a3,...,an, ... ,a4,a2）, 要求T(n)=O(n)，
先给出算法思想，再写出相应代码。
*/
#include<stdio.h>
#include<malloc.h>
typedef struct LNode {
	int data;
	LNode* next;
} *LinkList, LNode;

void fun(LinkList A) {
	LinkList p = A->next;
	if (!p->next)
	{
		return;
	}
	LinkList q = p->next; /* p 指向 A 的第一个结点 */
LinkList B = (LinkList)malloc(sizeof(LNode));
B->next = NULL; /* 创建链表 B */
while (p && q)
{
	p->next = q->next;
	q->next = B->next;
	B->next = q;

	if (p->next)
	{
		p = p->next;
		q = p->next;
	} //尾插法实现倒序
	else
	{
		break;
	}
	}
	p->next = B->next; 
	free(B);//A接B 释放B
}
int main()
{
	LinkList a = (LinkList)malloc(sizeof(LNode));
	LinkList b = (LinkList)malloc(sizeof(LNode));
	LinkList c = (LinkList)malloc(sizeof(LNode));
	LinkList d = (LinkList)malloc(sizeof(LNode));
	LinkList e = (LinkList)malloc(sizeof(LNode));
	LinkList A = (LinkList)malloc(sizeof(LNode));
	a->data = 11;
	b->data = 22;
	c->data = 33;
	d->data = 44;
	e->data = 55;
	A->next = a;
	a->next = b;
	b->next = c;
	c->next = d;
	d->next = e;
	e->next = NULL;
	for (LinkList p = A->next; p != NULL; p = p->next)
	{
		printf("%d ", p->data);
	}
	printf("\n");
	fun(A);
	for (LinkList p = A->next; p != NULL; p = p->next)
	{
		printf("%d ", p->data);
	}

}