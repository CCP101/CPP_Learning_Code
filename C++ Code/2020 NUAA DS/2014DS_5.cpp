//2014数据结构第五题 
#include<stdio.h> 
#include<malloc.h>
#define maxsize 50
typedef struct BTNode{//和13年有所不同 
	int data;
	struct BTNode* l;//现在l是孩子  
	struct BTNode* r;//现在r是兄弟 
}BTNode,*BiTree;
void BTDepth(BiTree T){
	if(!T){return;}
	BiTree Q[maxsize],p;
	int front=-1,rear=-1,top=-1;
	int last=0,level=0,count=1;
	Q[++rear]=T;//根节点入队，开始处理
	while(front<rear)
	{	p=Q[++front];//出队、访问 
		++top;//入栈、保存 (逻辑栈)
		if(p->l!=NULL){
			p=p->l;Q[++rear]=p;//有孩子就把孩子入队 
			while(p->r!=NULL)
			{p=p->r;Q[++rear]=p;}} //其他孩子也入队 
		if(last==front)//如果访问到某层的最后一个节点 
		{	level++;
			last=rear; 
			if(rear>front){
				count=last-front;//如果这不是最后一层，就更新一下即将出队的下一层的人数 
			} 
		}
	} 
	printf("最后一代%d个人，共有%d代\n",count,level);
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