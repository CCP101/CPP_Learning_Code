//2018数据结构第五题 
#include<stdio.h> 
#include<malloc.h>
#define maxsize 50
typedef struct BTNode{
	int data;
	struct BTNode* l;
	struct BTNode* r;
}BTNode,*BiTree;
int function(BiTree T,int x,int y)
{
	if(!T)return -2;
	int level=0,level1=-1,level2=-1;
	int last=0,front=-1,rear=-1;
	BiTree Q[maxsize],p;
	Q[++rear]=T;
	while(front<rear)
	{
		p=Q[++front];
		if(p->l){
			Q[++rear]=p->l;
		}
		if(p->r){
			Q[++rear]=p->r;
		}

		if(p->data==x){
			level1=level;
		}
		if(p->data==y){
			level2=level;
		}
		if(last==front)
		{
			level++;last=rear;
		}
		
	}
	if(level1==level2&&level1==-1)
	{
		return -2;
	}
	if(level1==-1||level2==-1)
	{
		return -1;
	}
	else return level2>level1?level2-level1:level1-level2;
}
int main()
{
	BiTree root=(BiTree)malloc(sizeof(BTNode));
	BiTree r1= (BiTree)malloc(sizeof(BTNode));
	BiTree r2= (BiTree)malloc(sizeof(BTNode));
	BiTree r3= (BiTree)malloc(sizeof(BTNode));
	BiTree r4= (BiTree)malloc(sizeof(BTNode));
	root->data=100;r1->data=101;r2->data=102;r3->data=103;r4->data=104;
	root->l=r1;root->r=r2;
	r1->l=r3;r1->r=NULL;
	r2->l=NULL;r2->r=r4;
	r3->l=NULL;r3->r=NULL;
	r4->l=NULL;r4->r=NULL;
	int a=100,b=101;
	printf("%d与%d在树上的层次间隔为：%d\n",a,b,function(root,a,b));
	
	a=100,b=5;
	printf("%d与%d在树上的层次间隔为：%d\n",a,b,function(root,a,b));
	
	a=103,b=104;
	printf("%d与%d在树上的层次间隔为：%d\n",a,b,function(root,a,b));
	
	a=103,b=100;
	printf("%d与%d在树上的层次间隔为：%d\n",a,b,function(root,a,b));
	
	a=10,b=5;
	printf("%d与%d在树上的层次间隔为：%d\n",a,b,function(root,a,b));
}