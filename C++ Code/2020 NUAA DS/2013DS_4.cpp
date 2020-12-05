//2013数据结构第四题
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
			p = s;
		}
		else if (p->data > q->data)
		{
			q = q->next;//B链表不进行删除 
		}
		else {
			s = p->next;
			p->next = A->next;
			A->next = p;
			p = s;
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
	LinkList B = (LinkList)malloc(sizeof(LNode));
	LinkList b1 = (LinkList)malloc(sizeof(LNode));
	LinkList b2 = (LinkList)malloc(sizeof(LNode));
	A->next = a1; a1->next = a2; a2->next = a3; a3->next = NULL;
	a1->data = 2; a2->data = 3; a3->data = 5;
	B->next = b1; b1->next = b2; b2->next = NULL;
	b1->data = 1; b2->data = 3;
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