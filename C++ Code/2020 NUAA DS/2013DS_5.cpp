//2013数据结构第五题 层次遍历
/*
编写函数，用非递归方法，求二叉链表表示的二叉树T 的高度。
要求先给出算法思想，再写出相应代码。
*/
#include<stdio.h> 
#include<malloc.h>
#define maxsize 50
typedef struct BTNode {
	int data;
	struct BTNode* l;
	struct BTNode* r;
}BTNode, * BiTree;
int BTDepth(BiTree T) {
	if (!T) { return 0; }
	BiTree Q[maxsize], p;
	int front = -1, rear = -1;
	int last = 0, level = 0;//一层中最后一个节点，level表示已经访问的层数 
	Q[++rear] = T;//根节点入队，开始处理
	while (front < rear)
	{
		p = Q[++front];//该层最左侧结点
		if (p->l)
		{
			Q[++rear] = p->l;
		}
		if (p->r)
		{
			Q[++rear] = p->r;
		}
		if (last == front)//如果访问到某层的最后一个节点 
		{
			level++;
			last = rear;//实现该层的查找完毕
		}
	}
	return level;
}
int main()
{
	//自己定义一些二叉树试一试 
	BiTree r = (BiTree)malloc(sizeof(BTNode));
	r->data = 1;
	r->l = NULL;
	r->r = NULL;
	printf("该树有%d层\n", BTDepth(r));

	BiTree a21 = (BiTree)malloc(sizeof(BTNode));
	a21->data = 21;
	a21->l = NULL;
	a21->r = NULL;
	r->l = a21;
	BiTree a22 = (BiTree)malloc(sizeof(BTNode));
	a22->data = 22;
	a22->l = NULL;
	a22->r = NULL;
	r->r = a22;
	printf("该树有%d层\n", BTDepth(r));

	BiTree a31 = (BiTree)malloc(sizeof(BTNode));
	a31->data = 31;
	BiTree a32 = (BiTree)malloc(sizeof(BTNode));
	a32->data = 32;
	a21->l = a31;
	a21->r = a32;
	a31->l = NULL;
	a31->r = NULL;
	a32->l = NULL;
	a32->r = NULL;
	printf("该树有%d层\n", BTDepth(r));
	//其他情况自己去试吧 
}