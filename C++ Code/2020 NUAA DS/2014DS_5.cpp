//2014���ݽṹ������ 
#include<stdio.h> 
#include<malloc.h>
#define maxsize 50
typedef struct BTNode{//��13��������ͬ 
	int data;
	struct BTNode* l;//����l�Ǻ���  
	struct BTNode* r;//����r���ֵ� 
}BTNode,*BiTree;
void BTDepth(BiTree T){
	if(!T){return;}
	BiTree Q[maxsize],p;
	int front=-1,rear=-1,top=-1;
	int last=0,level=0,count=1;
	Q[++rear]=T;//���ڵ���ӣ���ʼ����
	while(front<rear)
	{	p=Q[++front];//���ӡ����� 
		++top;//��ջ������ (�߼�ջ)
		if(p->l!=NULL){
			p=p->l;Q[++rear]=p;//�к��ӾͰѺ������ 
			while(p->r!=NULL)
			{p=p->r;Q[++rear]=p;}} //��������Ҳ��� 
		if(last==front)//������ʵ�ĳ������һ���ڵ� 
		{	level++;
			last=rear; 
			if(rear>front){
				count=last-front;//����ⲻ�����һ�㣬�͸���һ�¼������ӵ���һ������� 
			} 
		}
	} 
	printf("���һ��%d���ˣ�����%d��\n",count,level);
	while(count>0){
		printf("%d ",Q[top--]->data);
		count--;
	}printf("\n");
}
int main()
{
	BiTree root=   (BiTree)malloc(sizeof(BTNode));
	BiTree r11= (BiTree)malloc(sizeof(BTNode));
	BiTree r12= (BiTree)malloc(sizeof(BTNode));
	BiTree r13= (BiTree)malloc(sizeof(BTNode));
	BiTree r14= (BiTree)malloc(sizeof(BTNode));
	root->data=100;
	root->l=NULL;root->r=NULL;
	BTDepth(root);
	
	root->l=r11;root->r=NULL;
	r11->data=101;
	r11->l=NULL;r11->r=NULL;
	BTDepth(root);
	
	r11->r=r12;
	r12->data=102;
	r12->l=NULL;r12->r=NULL;
	BTDepth(root);
	
	r12->r=r13;
	r13->data=103;
	r13->l=NULL;r13->r=NULL;
	BTDepth(root);
	
	r13->l=r14;
	r14->data=104;
	r14->l=NULL;r14->r=NULL;
	BTDepth(root);
}