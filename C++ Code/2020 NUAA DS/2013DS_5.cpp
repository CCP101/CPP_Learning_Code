//2013数据结构第五题 
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
	int last=0,level=0;//一层中最后一个节点，level表示已经访问的层数 
	Q[++rear]=T;//根节点入队，开始处理
	while(front<rear)
	{
		p=Q[++front];
		if(p->l){Q[++rear]=p->l;}
		if(p->r){Q[++rear]=p->r;}
		if(last==front)//如果访问到某层的最后一个节点 
		{
			level++;
			last=rear; 
		}
	} 
	return level;
}
int main()
{
	//自己定义一些二叉树试一试 
	BiTree r= (BiTree)malloc(sizeof(BTNode));
	r->l=NULL;r->r=NULL;
	printf("该树有%d层\n",BTDepth(r));
	
	BiTree a21= (BiTree)malloc(sizeof(BTNode));
	a21->l=NULL;a21->r=NULL;
	r->l=a21;
	printf("该树有%d层\n",BTDepth(r));
	
	BiTree a31= (BiTree)malloc(sizeof(BTNode));
	BiTree a32= (BiTree)malloc(sizeof(BTNode));
	a21->l=a31;a21->r=a32;
	a31->l=NULL;a31->r=NULL;a32->l=NULL;a32->r=NULL;
	printf("该树有%d层\n",BTDepth(r));
	//其他情况自己去试吧 
}