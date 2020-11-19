//2013���ݽṹ������ 
#include<stdio.h> 
#include<malloc.h>
#define maxsize 50
typedef struct BTNode{
	int data;
	struct BTNode* l;
	struct BTNode* r;
}BTNode,*BiTree;
int BTDepth(BiTree T){
	if(!T){return 0;}
	BiTree Q[maxsize],p;
	int front=-1,rear=-1;
	int last=0,level=0;//һ�������һ���ڵ㣬level��ʾ�Ѿ����ʵĲ��� 
	Q[++rear]=T;//���ڵ���ӣ���ʼ����
	while(front<rear)
	{
		p=Q[++front];
		if(p->l){Q[++rear]=p->l;}
		if(p->r){Q[++rear]=p->r;}
		if(last==front)//������ʵ�ĳ������һ���ڵ� 
		{
			level++;
			last=rear; 
		}
	} 
	return level;
}
int main()
{
	//�Լ�����һЩ��������һ�� 
	BiTree r= (BiTree)malloc(sizeof(BTNode));
	r->l=NULL;r->r=NULL;
	printf("������%d��\n",BTDepth(r));
	
	BiTree a21= (BiTree)malloc(sizeof(BTNode));
	a21->l=NULL;a21->r=NULL;
	r->l=a21;
	printf("������%d��\n",BTDepth(r));
	
	BiTree a31= (BiTree)malloc(sizeof(BTNode));
	BiTree a32= (BiTree)malloc(sizeof(BTNode));
	a21->l=a31;a21->r=a32;
	a31->l=NULL;a31->r=NULL;a32->l=NULL;a32->r=NULL;
	printf("������%d��\n",BTDepth(r));
	//��������Լ�ȥ�԰� 
}