//2013���ݽṹ������ ��α���
/*
��д�������÷ǵݹ鷽��������������ʾ�Ķ�����T �ĸ߶ȡ�
Ҫ���ȸ����㷨˼�룬��д����Ӧ���롣
*/
#include<stdio.h> 
#include<malloc.h>
#define maxsize 50
typedef struct BTNode {
	int data;
	struct BTNode* l;
	struct BTNode* r;
}BTNode, * BiTree;
int BTDepth(BiTree T) {
	if (!T) { return 0; }
	BiTree Q[maxsize], p;
	int front = -1, rear = -1;
	int last = 0, level = 0;//һ�������һ���ڵ㣬level��ʾ�Ѿ����ʵĲ��� 
	Q[++rear] = T;//���ڵ���ӣ���ʼ����
	while (front < rear)
	{
		p = Q[++front];//�ò��������
		if (p->l)
		{
			Q[++rear] = p->l;
		}
		if (p->r)
		{
			Q[++rear] = p->r;
		}
		if (last == front)//������ʵ�ĳ������һ���ڵ� 
		{
			level++;
			last = rear;//ʵ�ָò�Ĳ������
		}
	}
	return level;
}
int main()
{
	//�Լ�����һЩ��������һ�� 
	BiTree r = (BiTree)malloc(sizeof(BTNode));
	r->data = 1;
	r->l = NULL;
	r->r = NULL;
	printf("������%d��\n", BTDepth(r));

	BiTree a21 = (BiTree)malloc(sizeof(BTNode));
	a21->data = 21;
	a21->l = NULL;
	a21->r = NULL;
	r->l = a21;
	BiTree a22 = (BiTree)malloc(sizeof(BTNode));
	a22->data = 22;
	a22->l = NULL;
	a22->r = NULL;
	r->r = a22;
	printf("������%d��\n", BTDepth(r));

	BiTree a31 = (BiTree)malloc(sizeof(BTNode));
	a31->data = 31;
	BiTree a32 = (BiTree)malloc(sizeof(BTNode));
	a32->data = 32;
	a21->l = a31;
	a21->r = a32;
	a31->l = NULL;
	a31->r = NULL;
	a32->l = NULL;
	a32->r = NULL;
	printf("������%d��\n", BTDepth(r));
	//��������Լ�ȥ�԰� 
}