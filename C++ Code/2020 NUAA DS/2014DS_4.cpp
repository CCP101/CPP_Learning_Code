//2014���ݽṹ������ ������
/*
��һ����ͷ���ĵ�����L������Ԫ��Ϊ��a1,a2,a3,a4,... ,an��,��д������
����������ʹ������Ԫ�ش���Ϊ��a1, a3,...,an, ... ,a4,a2��, Ҫ��T(n)=O(n)��
�ȸ����㷨˼�룬��д����Ӧ���롣
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
	LinkList q = p->next; /* p ָ�� A �ĵ�һ����� */
LinkList B = (LinkList)malloc(sizeof(LNode));
B->next = NULL; /* �������� B */
while (p && q)
{
	p->next = q->next;
	q->next = B->next;
	B->next = q;

	if (p->next)
	{
		p = p->next;
		q = p->next;
	} //β�巨ʵ�ֵ���
	else
	{
		break;
	}
	}
	p->next = B->next; 
	free(B);//A��B �ͷ�B
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