//2013���ݽṹ������ ������
/*
��֪��������ͷ���ĵ�����A ��B��Ԫ��ֵ�������򣬱�д����������ɾ��
A ����ʹA �������Ԫ��ֵΪA��B �Ľ���������Ϊһ���ݼ�����ĵ�����
Ҫ���ȸ����㷨˼�룬��д����Ӧ���롣
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
			p = s;//ɾ���ǽ�����㣬���ƶ�ָ��
		}
		else if (p->data > q->data)
		{
			q = q->next;//B��������ɾ�������ƶ�ָ��
		}
		else {
			s = p->next;//�����ֳ�
			p->next = A->next;
			A->next = p;
			p = s;//��������β�巨ʵ�ֵ���,����ԭ��ֵ
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
	printf("A��Ԫ�أ�");
	while (p) {
		printf("%d ", p->data); p = p->next;
	} printf("\nB��Ԫ�أ�");
	while (q) {
		printf("%d ", q->data); q = q->next;
	}printf("\nִ��ȡ��������֮��\n");
	GetCommon(A, B);
	p = A->next, q = B->next;
	printf("A��Ԫ�أ�");
	while (p) {
		printf("%d ", p->data); p = p->next;
	} printf("\nB��Ԫ�أ�");
	while (q) {
		printf("%d ", q->data); q = q->next;
	}
}