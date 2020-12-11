//2016���ݽṹ������ �������+��ȫ������
/*
��֪һ�ö��������ʾ�Ķ�����T����д�������ж�T �Ƿ�����ȫ����������
�����㷨˼�룬��д��������롣
*/
#include<stdio.h> 
#include<malloc.h>
#define maxsize 50
typedef struct BTNode{//��13��������ͬ 
	int data;
	struct BTNode* l;//����l�Ǻ���  
	struct BTNode* r;//����r���ֵ� 
}BTNode,*BiTree;
bool check(BiTree T){//�����ȫ������
	if(!T){return false;}
	BiTree Q[maxsize],p;
	int front=-1,rear=-1;
	Q[++rear]=T;//���ڵ���ӣ���ʼ����
	while(front<rear)
	{
		p=Q[++front];
		if(p->l&&p->r)//���Ҿ����գ������ 
		{
			Q[++rear]=p->l;
			Q[++rear]=p->r;
		}
		else if(p->r&&!p->l)
		{//����Ҳ��գ��ط���ȫ������ 
			return false;
		}
		else{//�󲻿��пջ������Ҿ��գ������ȷ�����������нڵ㶼��Ҷ�ӽڵ㣬�������ȫ������ 
			if(p->l&&!p->r){
				Q[++rear]=p->l;
			}
			while(front<rear)
			{
				p=Q[++front];
				if(p->r||p->l)
				{//�ҵ���Ҷ�ӽڵ� 
					return false;
				}
			}
		}
	} return true;
}
void check_p(BiTree T)
{
	if(check(T)){
		printf("����Ϊ��ȫ������\n");
	}else{
		printf("����ȫ������\n");
	}
}
int main()
{
	BiTree root=(BiTree)malloc(sizeof(BTNode));
	BiTree r1= (BiTree)malloc(sizeof(BTNode));
	BiTree r2= (BiTree)malloc(sizeof(BTNode));
	BiTree r3= (BiTree)malloc(sizeof(BTNode));
	BiTree r4= (BiTree)malloc(sizeof(BTNode));
	root->data=100;r1->data=101;r2->data=102;r3->data=103;r4->data=104;
	root->l=NULL;root->r=NULL;
	check_p(root);
	
	r1->l=NULL;r1->r=NULL;
	root->l=r1;
	check_p(root);
	
	r2->l=NULL;r2->r=NULL;
	root->r=r2;
	check_p(root);
	
	r3->l=NULL;r3->r=NULL;
	r2->l=r3;
	check_p(root);
	
	r4->l=NULL;r4->r=NULL;
	r1->l=r4;
	check_p(root);
	
	r1->r=r3;r2->l=NULL;
	check_p(root);
	
}