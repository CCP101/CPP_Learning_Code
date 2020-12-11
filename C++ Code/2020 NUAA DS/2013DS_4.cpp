//2013数据结构第四题 链表处理
/*
已知有两个带头结点的单链表A 和B，元素值递增有序，编写函数，调整删减
A 链表，使A 链表结点的元素值为A、B 的交集，并成为一个递减有序的单链表。
要求先给出算法思想，再写出相应代码。
*/
#include<stdio.h>
#include<malloc.h>
typedef struct LNode {
	int data;
	struct LNode* next;
} *LinkList, LNode;
void GetCommon(LinkList A, LinkList B)
{
	LinkList p = A->next, q = B->next, s = NULL;
	A->next = NULL;
	while (p && q)
	{
		if (p->data < q->data)
		{
			s = p->next;
			free(p);
			p = s;//删除非交集结点，并移动指针
		}
		else if (p->data > q->data)
		{
			q = q->next;//B链表不进行删除，并移动指针
		}
		else {
			s = p->next;//保存现场
			p->next = A->next;
			A->next = p;
			p = s;//数组链表尾插法实现倒序,返回原有值
		}
	}
	while (p)
	{
		s = p->next;
		free(p);
		p = s;
	}
}
int main()
{
	LinkList A = (LinkList)malloc(sizeof(LNode));
	LinkList a1 = (LinkList)malloc(sizeof(LNode));
	LinkList a2 = (LinkList)malloc(sizeof(LNode));
	LinkList a3 = (LinkList)malloc(sizeof(LNode));
	LinkList a4 = (LinkList)malloc(sizeof(LNode));
	LinkList B = (LinkList)malloc(sizeof(LNode));
	LinkList b1 = (LinkList)malloc(sizeof(LNode));
	LinkList b2 = (LinkList)malloc(sizeof(LNode));
	LinkList b3 = (LinkList)malloc(sizeof(LNode));
	A->next = a1; 
	a1->next = a2; 
	a2->next = a3; 
	a3->next = a4; 
	a4->next = NULL;
	a1->data = 2; 
	a2->data = 3; 
	a3->data = 5; 
	a4->data = 6;
	B->next = b1; 
	b1->next = b2; 
	b2->next = b3; 
	b3->next = NULL;
	b1->data = 1; 
	b2->data = 3; 
	b3->data = 6;
	LinkList p = A->next, q = B->next;
	printf("A中元素：");
	while (p) {
		printf("%d ", p->data); p = p->next;
	} printf("\nB中元素：");
	while (q) {
		printf("%d ", q->data); q = q->next;
	}printf("\n执行取交集操作之后：\n");
	GetCommon(A, B);
	p = A->next, q = B->next;
	printf("A中元素：");
	while (p) {
		printf("%d ", p->data); p = p->next;
	} printf("\nB中元素：");
	while (q) {
		printf("%d ", q->data); q = q->next;
	}
}