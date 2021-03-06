// C语言实验与等级考试.cpp: 定义控制台应用程序的入口点。
//
/* 第一章 C语言程序设计概述 2017-10-18*/
#include<stdio.h>
int main()
{
	printf("Hello,world!");
	return 0;
}
#include<stdio.h>
int main()
{
	float a, b, c;
	a = 2.5;
	b = 3.6;
	c = a*b;
	printf("%f\n", c);
	return 0;
}
/* 第二章 数据类型及其运算 2017-10-21 */
#include<stdio.h>
int main()
{
	char ch1 = 'A', ch2;
	ch2 = ch1 + 32;
	printf("%d,%c\n", ch1, ch1);
	printf("%d,%c\n", ch2, ch2);
	return 0;
}
#include<stdio.h>
int main()
{
	char c1 = 'a', c2 = 'b', c3 = 'c', c4 = '\101', c5 = '\116';
	printf("a%c b%c\tc%c\tabc\n", c1, c2, c3);
	printf("\t\b%c %c\n", c4, c5);
	return 0;
}
#include<stdio.h>
int main()
{
	float a, b;
	a = 98;
	b = 5 / 9 * (a - 32);
	printf("b=%f\n", b);
	return 0;
}
#include<stdio.h>
int main()
{
	int a = 8, b = 15, m, n;
	m = a++;
	n = ++b;
	printf("a=%d\nb=%d\nm=%d\nn=%d\n", a, b, m, n);
	return 0;
}
#include<stdio.h>
int main()
{
	double x = 2.5, y = 4.7;
	double m;
	int a = 3;
	m = x + a % 3 * (int)(x + y) % 2 / 4;
	printf("m=%f\n,m");
	return 0;
}
#include<stdio.h>
int main()
{
	int a = 12, n = 5;
	a += a;
	printf("a=%d\t",a);
	a *= 2 + 3;
	printf("a=%d\t",a);
	a %= (n %= 2);
	printf("a=%d\n", a);
	return 0;
}
#include<stdio.h>
int main()
{
	int a = 12, b = 7, c;
	c = (a < b) ? a : b;
	printf("c=%d\n", c);
	return 0;
}
#include<stdio.h>
int main()
{
	int a, b, c;
	c = (a = 3, b = 12);
	printf("a=%d\tb=%d\tc=%d\n", a, b, c);
	return 0;
}
#include<stdio.h>
int main()
{
	int a = 3, b = 4, c = 5, x, y, ch1, ch2, ch3, ch4, ch5;
	ch1 = a + b > c&&b == c;
	ch2 = a || b + c&&b - c;
	ch3 = !(a > b) && !c || 1;
	ch4 = !(x = a) && (y = b) && 0;
	ch5 = !(a + b) + c - 1 && b + c / 2;
	printf("a + b > c&&b ==c=%d\n", ch1);
	printf("a || b + c&&b - c=%d\n", ch2);
	printf("!(a > b) && !c || 1=%d\n", ch3);
	printf("!(x = a) && (y = b) && 0=%d\n", ch4);
	printf("!(a + b) + c - 1 && b + c / 2=%d\n", ch5);
	return 0;
}
/*第三章 语句与输入输出 2017-10-24*/
#include<stdio.h>
int main()
{
	int a, b, c;
	a = 1;
	b = 2;
	c = 3;
	printf("a=%d,b=%d,c=%d\n", a, b, c);
	return 0;
}
#include<stdio.h>
int main()
{
	int a = 13, b = -1;
	printf("a=%d,a=%o,a=%x\n", a, a, a);
	printf("b=%d,b=%o,b=%x\n", b, b, b);
	return 0;
}
#include<stdio.h>
int main()
{
	int a = 13;
	printf("a=%d!\n", a);
	printf("a=%3d!\n", a);
	printf("a=%-3d!\n", a);
	return 0;
}
#include<stdio.h>
int main()
{
	double a = 5.6789;
	printf("a=%f!\n", a);
	printf("a=%5.2f!\n", a);
	printf("a=%-5.2f!\n", a);
	return 0;
}
#include<stdio.h>
int main()
{
	int a, b;
	scanf("%2d%3d", &a, &b);
	printf("a=%d,b=%d\n", a, b);
	return 0;
}
#include<stdio.h>
int main()
{
	double S, r;
	scanf("%lf", &r);
	S = r*r*3.1415926;
	printf("%.2lf\n", S);
	return 0;
}
#include<stdio.h>
#include<math.h>
int main()
{
	int a = 3, b = 4, c = 6;
	double s, p = (a + b + c) / 2.0;
	s = sqrt(p*(p - a)*(p - b)*(p - c));
	printf("s=%lf\n", s);
	return 0;
}
#include<stdio.h>
int main()
{
	int a = 560, b, c;
	b = 560 / 60;
	c = 560 % 60;
	printf("%d小时%d分钟\n", b, c);
	return 0;
}
#include<stdio.h>
int main()
{
	int a, b, t;
	printf("请输入两个整数\n");
	scanf("%d%d", &a, &b);
	printf("输入a=%d,b=%d\n", a, b);
	t = a;
	a = b;
	b = t;
	printf("输出a=%d,b=%d\n", a, b);
	return 0;
}
/*第四章 选择结构程序设计 2017-10-27*/
#include<stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	if (a % 2 == 0)
		printf("%d是一个偶数", a);
	else
		printf("%d是一个奇数", a);
	return 0;
}
#include<stdio.h>
int main()
{
	int a, b, c, d, max1, max2, max;
	printf("请输入四个数字\n");
	scanf("%d%d%d%d", &a, &b, &c, &d);
	if (a>b)
		max1 = a;
	else     max1 = b;
	if (c>d)
		max2 = c;
	else     max2 = d;
	if (max1>max2)
		max = max1;
	else     max = max2;
	printf("%d是最大值", max);
	return 0;
}
#include<stdio.h>
int main()
{
	int x, y;
	printf("请输入x");
	scanf("%d", &x);
	if (x >= 12) y = 4 * x - 7;/*C 语言注意点*/
	else
		if (x<2) y = 3 * x + 5;
		else    y = x*x;
		printf("y的值为%d\n", y);
		return 0;
}
#include<stdio.h>
int main()
{
	char ch;
	printf("Please input a character:\n");
	scanf("%c", &ch);
	if (ch >= 'a'&&ch <= 'z')
		printf("%c\n", ch - 32);
	else printf("%c\n", ch);
	return 0;
}
#include<stdio.h>
int main()
{
	int score, grade;
	printf("Please input a score(0~100)\n");
	scanf("%d", &score);
	if (score >= 0 && score <= 100)
	{
		grade = score / 10;
		switch (grade)
		{
		case 10:
		case 9:printf("A\n"); break;
		case 8:printf("B\n"); break;
		case 7:printf("C\n"); break;
		case 6:printf("D\n"); break;
		case 5:
		case 4:
		case 3:
		case 2:
		case 1:
		case 0:printf("E\n"); break;
		}
	}
	else
		printf("Wrong score!\n");
	return 0;
}
/*第五章 循环结构程序设计 2017-11-01*/
#include<stdio.h>
int main()
{
	int x, a, b, c, i;
	printf("水仙花数有:\n");
	for (i = 100; i <= 999; i++)
	{
		a = i / 100;/*三位数各位表达方式*/
		b = i / 10 % 10;
		c = i % 10;
		x = a*a*a + b*b*b + c*c*c;
		if (i == x)
			printf("%d\n", i);
	}
	return 0;
}
#include<stdio.h>
#include<math.h>
int main()
{
	int n, i, count = 0;
	double k;
	for (n = 500; n <= 1000; n++)
	{
		k = sqrt(n);
		for (i = 2; i<n; i++)
			if (n%i == 0)
				break;
		if (i == n)
			count++;
	}
	printf("count=%d\n", count);
	return 0;
}
/*
检验素数
#include<stdio.h>
#include<math.h>
int main()
{
	int n, i, count = 0;
	double k;
	for (n = 500; n <= 1000; n++)
	{
		k = sqrt(n);
		for (i = 2; i<n; i++)
			if (n%i == 0)
				break;
		if (i == n)
			count++;
	}
	printf("count=%d\n", count);
	return 0;
}
*/
#include<stdio.h>
int main()
{
	int a, b, c, x, y, m, t;
	printf("请输入两个整数：");
	scanf("%d,%d", &a, &b);
	x = a;
	y = b;
	if (a<b)
	{
		t = a;
		a = b;
		b = t;
	}
	while (b != 0)
	{
		c = a%b;
		a = b;
		b = c;
	}
	printf("%d和%d最大公约数为：%d\n", x, y, a);
	m = x*y / a;
	printf("%d和%d最小公倍数为：%d\n", x, y, m);
	return 0;
}
#include<stdio.h>
int main()
{
	int x, s = 0, i, t, y = 1;
	printf("Please input a number:");
	scanf("%d", &x);
	for (i = 1; i <= x; i++)
	{
		y = y*i;
		s = s + y;
	}
	printf("s=1!+2!+......+x!=%d\n", s);
	return 0;
}
#include<stdio.h>
int main()
{
	double x, a, b, a1 = 0, b1 = 0, s;
	printf("Please input a number:");
	scanf("%lf", &x);
	for (a = 1; a <= x; a = a + 2)
		a1 = a1 + 1 / a;
	for (b = 2; b <= x; b = b + 2)
		b1 = b1 - 1 / b;
	s = a1 + b1;
	printf("%lf", s);
	return 0;
}
/*5.5教师版 pow(x,y) 计算x的y次幂*/
#include<stdio.h>
#include<math.h>
int main()
{
	int i, m;
	double s = 0, t;
	scanf("%d", &m);
	for (i = 1; i <= m; i++)
	{
		t = pow(-1, i - 1)*(1.0 / i);
		s = s + t;
	}
	printf("1-1/2+1/3......=%lf\n", s);
	return 0;
}
#include<stdio.h>
#include<math.h>
int main()
{
	int x, a, s = 0, m, b;
	printf("请输入一个数字：");
	scanf("%d", &x);
	for (a = 1, b = x - 1; a <= x; a++, b--)
	{
		m = 3 * a*pow(10, b);
		s = s + m;
	}
	printf("3+33+333+.....=%d\n", s);
	return 0;
}
#include<stdio.h>
int main()
{
	int x, i, c;
	printf("1000以内的所有完数为:\n");
	for (x = 2; x<1000; x++)
	{
		c = 0;
		for (i = 1; i<x - 1; i++)
		{
			if (x%i == 0)
				c = i + c;
		}
		if (c == x)
			printf("%d\n", x);
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int a, b, c;
	printf("Output:\n");
	for (a = 1; a<10; a++)
	{
		for (b = 1; b <= a; b++)
		{
			c = a*b;
			printf("%d*%d=%d ", b, a, c);
		}
		printf("\n");
	}
	return 0;
}
/*第六章 数组 2017-11-14*/
/*冒泡排序法*/
#include<stdio.h>
int main()
{
	int a[5], i, j, t;
	printf("请输入5个数字:");
	for (i = 0; i<5; i++)
		scanf("%d", &a[i]);
	for (j = 0; j<4; j++)
		for (i = 0; i<4 - j; i++)
			if (a[i]>a[i + 1])
			{
				t = a[i];
				a[i] = a[i + 1];
				a[i + 1] = t;
			}
	printf("排列后为:\n");
	for (i = 0; i<5; i++)
		printf("%3d", a[i]);
	printf("\n");
	return 0;
}
/*选择排序法*/
#include<stdio.h>
int main()
{
	int a[5], i, j, r, t;
	printf("请输入5个数字：");
	for (i = 0; i <= 4; i++)
		scanf("%d", &a[i]);
	for (i = 0; i<4; i++)
	{
		r = i;
		for (j = i + 1; j<5; j++)
			if (a[j]<a[r])
				r = j;
		t = a[i];
		a[i] = a[r];
		a[r] = t;
	}
	printf("排序后5个数字为：");
	for (i = 0; i<5; i++)
		printf("%5d", a[i]);
	printf("\n");
	return 0;
}
#include<stdio.h>
int main()
{
	int a[5][5], i, j, s=0, x;
	printf("请输入矩阵中各个数字：\n");
	for (i = 0; i <= 4; i++)
		for (j = 0; j <= 4; j++)
			scanf("%d", &a[i][j]);
	for (x = 0; x <= 4; x++)
		s += a[x][x];
	printf("矩阵的对角线之和为：%d\n", s);
	printf("矩阵为：\n");
	for (i = 0; i <= 4; i++)
	{
		for (j = 0; j <= 4; j++)
			printf("%3d", a[i][j]);
		printf("\n");
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int a[5][5], i, j, s = 0;
	printf("Please input:");
	for (i = 0; i <= 4; i++)
		for (j = 0; j <= 4; j++)
			scanf("%d", &a[i][j]);
	for (i = 0; i <= 4; i++)
		for (j = 0; j <= i; j++)
			s = s + a[i][j];
	printf("下三角元素之和为：%d", s);
	return 0;
}
#include<stdio.h>
int main()
{
	int score[3][10], i, j, t;
	printf("Please input:\n");
	for (i = 0; i <= 2; i++)
		for (j = 0; j <= 9; j++)
			scanf("%d", &score[i][j]);
	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j<9 - i; j++)
			if (score[i][j]>score[i][j + 1])
			{
				t = score[i][j];
				score[i][j] = score[i][j + 1];
				score[i][j + 1] = t;
			}
		printf("%4d", score[i][9]);
	}
	printf("The highest grade is:\n");
	return 0;
}
#include<stdio.h>
#define M 5
void sort(int a[M])
{
	int i, j, t;
	for (i = 0; i<M; i++)
		for (j = 0; j<M - i; j++)
		{
			if (a[j]>a[j + 1])
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
}
int main()
{
	int aa[M], x;
	printf("Please input:\n");
	for (x = 0; x<M; x++)
		scanf("%d", &aa[x]);
	sort(aa);
	for (x = 0; x<M; x++)
		printf("%5d", aa[x]);
	printf("\n");
	return 0;
}
#include<stdio.h>
int main()
{
	int a[10][10] = { 0 }, i, j;
	for (i = 0; i <= 9; i++)
	{
		a[i][i] = 1;
		a[i][0] = 1;
	}
	for (i = 2; i <= 9; i++)
		for (j = 1; j<i; j++)
			a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= i; j++)
			printf("%-4d", a[i][j]);
		printf("\n");
	}
	return 0;
}
#include<stdio.h>
#include<string.h>
int main()
{
	char a[80], b[40];
	int i, j;
	printf("Please input:\n");
	gets_s(a);
	gets_s(b);
	for (i = 0; a[i] != '\0'; i++)
		;
	for (j = 0; b[j] != '\0'; i++, j++)
		a[i] = b[j];
	a[i] = '\0';
	printf("The result:\n");
	for (i = 0; a[i] != '\0'; i++)
		printf("%c", a[i]);
	printf("\n");
	return 0;
}
#include<stdio.h>
int main()
{
	int n, count = 0;
	char b[20000];
	gets_s(b);
	for (n = 0; b[n] != '\0'; n++)
		count++;
	printf("%5d", count);
	return 0;
}
/*
#include<stdio.h>
int main()
{
	char c;
	int count = 0;
	c = getchar();
	while (c != '\n')
	{
		count++;
		c = getchar();
	}
	printf("%d\n", count);
	return 0;
}
*/
#include<stdio.h>
int main()
{
	void sort3(int b[5], int n);
	int a[5] = { 9,7,8,2,5 };
	int i;
	for (i = 0; i<5; i++)
		printf("%3d", a[i]);
	sort3(a, 5);
	printf("\nThe sorted array:\n");
	for (i = 0; i<5; i++)
		printf("%3d", a[i]);
	printf("\n");
	return 0;
}
void sort3(int b[5], int n)
{
	int i, j, k, t;
	for (i = 0; i<n - 1; i++)
	{
		k = i;
		for (j = i + 1; j<n; j++)
			if (b[k]>b[j])
				k = j;
		if (k != i)
		{
			t = b[k];
			b[k] = b[i];
			b[i] = t;
		}
	}
}
#include<stdio.h>
int main()
{
	int i, j, t, k;
	int a[5] = { 9,7,8,2,5 };
	for (i = 0; i<5; i++)
		printf("%d\t", a[i]);
	for (i = 0; i<5; i++)
	{
		k = i;
		for (j = i + 1; j<5; j++)
			if (a[k]>a[j])
				k = j;
		if (k != i)
		{
			t = a[k];
			a[k] = a[i];
			a[i] = t;
		}
	}
	printf("\nThe sorted array:\n");
	for (i = 0; i<5; i++)
		printf("%d\t", a[i]);
	printf("\n");
	return 0;
}
#include<stdio.h>
#define N 5
int main()
{
	int a[N], i, j, t;
	for (i = 0; i<N; i++)
		scanf("%d", &a[i]);
	for (j = 0; j<N - 1; j++)
		for (i = 0; i<N - 1 - j; i++)
			if (a[i]>a[i + 1])
			{
				t = a[i];
				a[i] = a[i + 1];
				a[i + 1] = t;
			}
	for (i = 0; i<N; i++)
		printf("%3d", a[i]);
	return 0;
}
#include<stdio.h>
#define N 5
void sort(int b[N])
{
	int i, j, t;
	for (j = 0; j<N - 1; j++)
		for (i = 0; i<N - 1 - j; i++)
			if (b[i]>b[i + 1])
			{
				t = b[i];
				b[i] = b[i + 1];
				b[i + 1] = t;
			}
}
int main()
{
	int a[N], i;
	for (i = 0; i<N; i++)
		scanf("%d", &a[i]);
	sort(a);
	for (i = 0; i<N; i++)
		printf("%3d", a[i]);
	return 0;
}
/*第七章 函数 2017-12-17*/
#include<stdio.h>
#include<math.h>
int fun(int n)
{
	int i, y;
	for (i = 2; i<n; i++)
		if (n%i == 0)
		{
			y = 0;
			break;
		}
		else
			y = 1;
	return y;
}
int main()
{
	int a = 0, k, count = 0;
	float av;
	for (k = 2; k <= 1000; k++)
		if (fun(k))
		{
			a += k;
			count++;
		}
	av = a / count;
	printf("av=%f\n", av);
	return 0;
}