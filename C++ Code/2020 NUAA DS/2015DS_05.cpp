//2015DS������
#include<stdio.h> 
#include<malloc.h>
#define maxsize 50
typedef struct BTNode{//��13��������ͬ 
	int data;
	struct BTNode* l;//����l�Ǻ���  
	struct BTNode* r;//����r���ֵ� 
}BTNode,*BiTree;
void postTravel(BiTree T)
{
	BiTree S[maxsize],Q[maxsize],p=T,r=NULL;//ջ���ں���ǵݹ���ʶ����� 
	int top=-1,front=-1,rear=-1;//�������ڴ洢�·�����������£� 
	while(p||top>-1)
	{
		while(p){//�ߵ������ 
			S[++top]=p;
			p=p->l;
		}
		if(!p){
			p=S[top];
			if(p->r&&p->r!=r)//�������������δ������ 
			{
				p=p->r;
				S[++top]=p;
				p=p->l;
				 
			}
			else{//���û���������������������Ѿ������ʣ����� 
				p=S[top--];
				if(!p->l&&!p->r)// ����ýڵ���Ҷ�� 
				{//��������·���ǵ�ǰ��� 
					if(top+2>rear-front)//����ԭ���и�Сbug���Ĺ����ˣ�topӦ��+2��ʾ��ǰջ��Ԫ�� 
					{//����·�� 
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
	while(front<rear){//��ӡһ�� 
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