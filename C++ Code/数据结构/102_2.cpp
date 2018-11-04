#include <iostream>

const int MAXSIZE = 20;
using namespace std;

class Double_Stack
{
public:
	int top[2], bot[2];
	int *point;
	int n;
};

void initstack(Double_Stack &stack)
{
	stack.n = MAXSIZE;
	stack.bot[0] = stack.top[0] = -1;
	stack.bot[1] = stack.top[1] = stack.n;
	stack.point = new int[MAXSIZE];
}

int emptystack(Double_Stack stack, int no)
{
	if (no == 0 && stack.top[0] == -1)
		return 1;
	else if (no == 1 && stack.top[1] == stack.n)
		return 1;
	else
		return 0;
}

int fullstack(Double_Stack stack)
{
	if (stack.top[1] - stack.top[0] == 1 && (stack.top[0] != -1 || stack.top[1] != stack.n))
		return 1;
	else
		return 0;
}

int pushstack(Double_Stack &stack, int no, int e)
{
	if (fullstack(stack))
		return 0;
	if (no == 0)
	{
		stack.top[0]++;
		stack.point[stack.top[0]] = e;
	}
	else
	{
		stack.top[1]--;
		stack.point[stack.top[1]] = e;
	}
	return 1;
}

int gettop(Double_Stack &stack, int no, int &e)
{
	if (no == 0)
		e = stack.point[stack.top[no]];
	else
		e = stack.point[stack.top[no]];
	return 1;
}

int popstack(Double_Stack &stack, int no, int e)
{
	if (emptystack(stack, 0) || emptystack(stack, 1))
		return 0;
	if (no == 0)
	{
		e = stack.point[stack.top[no]];
		stack.point[stack.top[no]] = -1;
		stack.top[no]--;
		cout << ("%d,", e);
	}
	else
	{
		e = stack.point[stack.top[no]];
		stack.point[stack.top[no]] = -1;
		stack.top[no]++;
		cout << ("%d,", e);
	}
	return 1;
}

int main()
{
	Double_Stack Double_Stack1;
	initstack(Double_Stack1);
	if (emptystack(Double_Stack1, 0))
		cout << ("0��ջĿǰΪ��!\n");
	if (emptystack(Double_Stack1, 1))
		cout << ("1��ջĿǰΪ��!\n");
	for (int i = 1; i < 12; i++)
	{
		if (!fullstack(Double_Stack1))
			cout << ("����Ԫ��:0��ջ%3d,1��ջ%3d\n", i, 12 - i);
		pushstack(Double_Stack1, 0, i);
		pushstack(Double_Stack1, 1, 12 - i);
	}
	if (fullstack(Double_Stack1))
		cout << ("\n��ջ����!\n");
	cout << ("\n0��ջ��ջԪ��:");
	for (int j = 1; j <= 8; j++)
		popstack(Double_Stack1, 0, j);
	cout << ("\n\n1��ջ��ջԪ��:");
	for (int k = 1; k < 15; k++)
		popstack(Double_Stack1, 1, k);
	if (emptystack(Double_Stack1, 0))
		cout << ("\n\n0��ջĿǰΪ��!\n");
	else
		cout << ("\n\n0��ջ��Ϊ��!\n");
	if (emptystack(Double_Stack1, 1))
		cout << ("\n1��ջĿǰΪ��!\n");
	else
		cout << ("\n1��ջ��Ϊ��!\n");
	return 0;
}
