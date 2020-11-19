#include<stdio.h> 
#include<malloc.h>
#define maxsize 50
typedef struct BTNode{
	int data;
	struct BTNode* l;//����l�Ǻ���  
	struct BTNode* r;//����r���ֵ� 
}BTNode,*BiTree;
BiTree BTLevel(BiTree T,BiTree target){//target�Ǹ����Ĵ���ڵ� 
	if(!T||T==target){return NULL;}//���target�Ǹ��ڵ㡢������Ϊ�գ��ͽ��� 
	BiTree Q[maxsize],p,father=NULL;//father���ڱ�� 
	int front=-1,rear=-1;
	Q[++rear]=T;//���ڵ���ӣ���ʼ����
	while(front<rear)
	{
		p=Q[++front];//���ӡ����� 
		father=p; //�ݴ�һ�¿��ܵ�father 
		if(p->l!=NULL){
			p=p->l;Q[++rear]=p;//�к��ӾͰѺ������ 
			if(p==target){return father;}
			while(p->r!=NULL)
			{p=p->r;Q[++rear]=p;
			if(p==target){return father;}
			}} //��������Ҳ��� 
	
	} 
	return NULL;
}
int main()
{
	BiTree root=(BiTree)malloc(sizeof(BTNode));
	BiTree r1= (BiTree)malloc(sizeof(BTNode));
	BiTree r2= (BiTree)malloc(sizeof(BTNode));
	BiTree r3= (BiTree)malloc(sizeof(BTNode));
	BiTree r4= (BiTree)malloc(sizeof(BTNode));
	root->data=100;
	r1->data=101;
	r2->data=102;
	r3->data=103;
	r4->data=104;
	root->l=r1;
	root->r=NULL;
	r1->l=r3;
	r1->r=r2;
	r2->l=r4;
	r2->r=NULL;
	r3->l=NULL;
	r3->r=NULL;
	r4->l=NULL;
	r4->r=NULL;
	BiTree fa=BTLevel(root,r2);
	if(!fa){printf("δ�ҵ���\n");}
	else{printf("\n%d\n",fa->data);}
	
}