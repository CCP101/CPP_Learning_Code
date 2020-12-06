//2015DS第五题
#include<stdio.h> 
#include<malloc.h>
#define maxsize 50
typedef struct BTNode{//和13年有所不同 
	int data;
	struct BTNode* l;//现在l是孩子  
	struct BTNode* r;//现在r是兄弟 
}BTNode,*BiTree;
void postTravel(BiTree T)
{
	BiTree S[maxsize],Q[maxsize],p=T,r=NULL;//栈用于后序非递归访问二叉树 
	int top=-1,front=-1,rear=-1;//队列用于存储最长路径（持续更新） 
	while(p||top>-1)
	{
		while(p){//走到最左边 
			S[++top]=p;
			p=p->l;
		}
		if(!p){
			p=S[top];
			if(p->r&&p->r!=r)//如果有右子树且未被访问 
			{
				p=p->r;
				S[++top]=p;
				p=p->l;
				 
			}
			else{//如果没有右子树、或者右子树已经被访问：弹出 
				p=S[top--];
				if(!p->l&&!p->r)// 如果该节点是叶子 
				{//并且这条路径是当前最长的 
					if(top+2>rear-front)//这里原本有个小bug被改过来了：top应该+2表示当前栈中元素 
					{//更新路径 
						int t=-1;
						rear=-1;
						while(t<=top){
							Q[++rear]=S[++t];
						}
					}
				}
		 		r=p;p=NULL;
			}
		}
	}
	while(front<rear){//打印一下 
		printf("%d  ",Q[++front]->data);
	}printf("\n");
} 
int main()
{
	BiTree root=(BiTree)malloc(sizeof(BTNode));
	BiTree r1= (BiTree)malloc(sizeof(BTNode));
	BiTree r2= (BiTree)malloc(sizeof(BTNode));
	BiTree r3= (BiTree)malloc(sizeof(BTNode));
	BiTree r4= (BiTree)malloc(sizeof(BTNode));
	root->data=100;r1->data=101;r2->data=102;r3->data=103;r4->data=104;
	root->l=r1;root->r=NULL;
	r1->l=NULL;r1->r=NULL;
	//postTravel(root);
	
	r1->r=r2;
	r2->l=NULL;r2->r=NULL;
	//postTravel(root);
	
	root->r=r3;
	r3->l=NULL;r3->r=NULL;
	//postTravel(root);
	
	root->r=NULL;
	r1->l=r3;
	//postTravel(root);
	
	r2->l=r4;
	r4->l=NULL;r4->r=NULL;
	postTravel(root);
}