#include<stdio.h> 
#include<malloc.h>
#define maxsize 50
typedef struct BTNode{
	int data;
	struct BTNode* l;//现在l是孩子  
	struct BTNode* r;//现在r是兄弟 
}BTNode,*BiTree;
BiTree BTLevel(BiTree T,BiTree target){//target是给出的待求节点 
	if(!T||T==target){return NULL;}//如果target是根节点、或者树为空，就结束 
	BiTree Q[maxsize],p,father=NULL;//father用于标记 
	int front=-1,rear=-1;
	Q[++rear]=T;//根节点入队，开始处理
	while(front<rear)
	{
		p=Q[++front];//出队、访问 
		father=p; //暂存一下可能的father 
		if(p->l!=NULL){
			p=p->l;Q[++rear]=p;//有孩子就把孩子入队 
			if(p==target){return father;}
			while(p->r!=NULL)
			{p=p->r;Q[++rear]=p;
			if(p==target){return father;}
			}} //其他孩子也入队 
	
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
	if(!fa){printf("未找到！\n");}
	else{printf("\n%d\n",fa->data);}
	
}