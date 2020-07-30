#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
	char ele;
	struct Node * next;
}Node;

typedef Node * Stack;

Stack MakeStack(void)//�½�ջ������ջ��
{
	Stack S = (Node *)malloc(sizeof(Node));
	S->next = NULL;
	return S;
}

void MakeNUll(Stack S)//�ÿ�ջ
{
	S->next = NULL;
}

void Pop(Stack S)//��ջ������
{
	Stack temp = S->next;
	S->next = temp->next;
}

void Push(Stack S, char c)//���½ڵ�ѹ��ջ
{
	Stack temp = (Node *)malloc(sizeof(Node));
	temp->ele = c;
	temp->next = S->next;
	S->next = temp;
}

Stack FindHead(Stack S)//����ջ��
{
	Stack temp = S->next;
	return temp;
}

void PrintHead(Stack S)//��ӡջ��Ԫ��
{
	Stack temp = S->next;
	printf("%c", temp->ele);
}

int main(void)
{
	Stack S = MakeStack();
	int i = 0;
	char str[200];
	printf("Type something.\n");
	gets_s(str);

	while (str[i] != '\0')
	{
		if (str[i] == '+' || str[i] == '-')//���str[i]�ǼӺŻ���ţ����ȵ���ջ��ֱ��ջ�ѿջ�ջ��Ԫ��Ϊ�����ţ��ٽ�str[i]ѹ��ջ
		{
			if (FindHead(S) == NULL)//��ջ�ѿ�ʱ��ջ��ָ��Ϊ�գ��Ҳ�����Ԫ�أ����뵥������
			{
				Push(S, str[i]);
			}
			else
			{
				while (FindHead(S)->ele == '+' || FindHead(S)->ele == '-' || FindHead(S)->ele == '*' || FindHead(S)->ele == '/')
				{
					PrintHead(S);
					Pop(S);
				}
				Push(S, str[i]);
			}
		}

		else if (str[i] == '*' || str[i] == '/')//���str[i]�ǳ˺Ż���ţ���ֻ��ջ��Ҳ�ǳ˳���ʱ����Ҫ����
		{
			if (FindHead(S) == NULL)
			{
				Push(S, str[i]);
			}
			else
			{
				while (FindHead(S)->ele == '*' || FindHead(S)->ele == '/')
				{
					PrintHead(S);
					Pop(S);
				}
				Push(S, str[i]);
			}
		}

		else if (str[i] == '(')//���str[i]����������ֱ��ѹ��ջ
		{
			Push(S, str[i]);
		}

		else if (str[i] == ')')//���str[i]�������ţ����ӡ������ջ�е�һ��������ǰ�����в���������󽫴�������ֱ�ӵ���
		{
			while (FindHead(S)->ele != '(')
			{
				PrintHead(S);
				Pop(S);
			}
			Pop(S);
		}

		else//���str[i]���ǲ�������ֱ�Ӵ�ӡ
		{
			printf("%c", str[i]);
		}

		i++;
	}

	while (FindHead(S) != NULL)//���������ջ��Ϊ�գ��򵯳����в�����
	{
		PrintHead(S);
		Pop(S);
	}

	return 0;
}