//2016数据结构第五题 层序遍历+完全二叉树
/*
已知一棵二叉链表表示的二叉树T，编写函数，判断T 是否是完全二叉树。先
给出算法思想，再写出程序代码。
*/
#include<stdio.h> 
#include<malloc.h>
#define maxsize 50
typedef struct BTNode{//和13年有所不同 
	int data;
	struct BTNode* l;//现在l是孩子  
	struct BTNode* r;//现在r是兄弟 
}BTNode,*BiTree;
bool check(BiTree T){//检查完全二叉树
	if(!T){return false;}
	BiTree Q[maxsize],p;
	int front=-1,rear=-1;
	Q[++rear]=T;//根节点入队，开始处理
	while(front<rear)
	{
		p=Q[++front];
		if(p->l&&p->r)//左右均不空，先入队 
		{
			Q[++rear]=p->l;
			Q[++rear]=p->r;
		}
		else if(p->r&&!p->l)
		{//左空右不空，必非完全二叉树 
			return false;
		}
		else{//左不空有空或者左右均空，则必须确保其后面的所有节点都是叶子节点，否则非完全二叉树 
			if(p->l&&!p->r){
				Q[++rear]=p->l;
			}
			while(front<rear)
			{
				p=Q[++front];
				if(p->r||p->l)
				{//找到非叶子节点 
					return false;
				}
			}
		}
	} return true;
}
void check_p(BiTree T)
{
	if(check(T)){
		printf("该树为完全二叉树\n");
	}else{
		printf("非完全二叉树\n");
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