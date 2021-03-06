//2014数据结构第五题 特殊的层次遍历
/*
设有一家谱树T，用二叉链表结构存储（孩子兄弟表示法），树中的结点信息为
成员名字。编写函数，输出家谱中共有多少代以及最后一代人数和成员名字。
要求先给出算法思想，再写出相应代码。
*/
#include<stdio.h> 
#include<malloc.h>
#define maxsize 50
typedef struct BTNode {//和13年有所不同 
	int data;
	struct BTNode* l;//现在l是孩子  
	struct BTNode* r;//现在r是兄弟 
}BTNode, * BiTree;
void BTDepth(BiTree T) {
	if (!T)
	{
		return;
	}
	BiTree Q[maxsize], p;
	int front = -1, rear = -1, top = -1;
	int last = 0, level = 0, count = 1;
	Q[++rear] = T;//根节点入队，开始处理
	while (front < rear)//按层次存储在数组中，使用非递归方法找寻孩子兄弟
	{
		p = Q[++front];//出队、访问 
		++top;//入栈、保存 (逻辑栈)
		if (p->l) {
			p = p->l; Q[++rear] = p;//有孩子就把孩子入队 
			while (p->r)
			{
				p = p->r; Q[++rear] = p;
			}
		} //其他孩子也入队 
		if (last == front)//如果访问到某层的最后一个节点 
		{
			level++;
			last = rear;
			if (rear > front) {
				count = last - front;//如果这不是最后一层，就更新一下即将出队的下一层的人数 
			}
		}
	}
	printf("最后一代%d个人，共有%d代\n", count, level);
	while (count > 0) {
		printf("%d ", Q[top--]->data);
		count--;
	}printf("\n");
}
int main()
{
	BiTree root = (BiTree)malloc(sizeof(BTNode));
	BiTree r11 = (BiTree)malloc(sizeof(BTNode));
	BiTree r12 = (BiTree)malloc(sizeof(BTNode));
	BiTree r13 = (BiTree)malloc(sizeof(BTNode));
	BiTree r14 = (BiTree)malloc(sizeof(BTNode));
	BiTree r15 = (BiTree)malloc(sizeof(BTNode));
	root->data = 100;
	root->l = NULL; root->r = NULL;
	//BTDepth(root);

	root->l = r11; root->r = NULL;
	r11->data = 101;
	r11->l = NULL; r11->r = NULL;
	//BTDepth(root);

	r11->r = r12;
	r12->data = 102;
	r12->l = NULL; r12->r = NULL;
	//BTDepth(root);

	r12->r = r13;
	r13->data = 103;
	r12->l = r15;
	r15->data = 105;
	r15->l = NULL; r15->r = NULL;
	r13->l = NULL; r13->r = NULL;
	//BTDepth(root);

	r13->r = r14;
	r14->data = 104;
	r14->l = NULL; r14->r = NULL;
	BTDepth(root);
}