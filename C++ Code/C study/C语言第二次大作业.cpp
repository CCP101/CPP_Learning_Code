/*
1. 编写函数fun，其功能是计算：
s作为函数值返回。
在C语言中可调用log(n)函数求ln(n)。log函数的引用说明为：double log(double x)。
例如，若m的值为20，则fun函数值为6.506583。
请勿改动主函数main和其它函数中的任何内容，仅在函数fun的花括号中填入你编写的若干语句。
*/
#include <math.h>
#include <stdio.h>
double   fun(int  m)
{
	double s = 0.0;
	int i;
	for (i = 1; i <= m; i++)
		s = s + log(i);
	return sqrt(s);
}
int main()
{
	printf("%f\n", fun(20));
	return 0;
}
/*
2. 编写函数fun，其功能是：求出1~1000之间能被7或11整除，但不能同时被7和11整除的所有整数，并将其放在a所指的数组中，通过函数返回值返回这些数的个数。
请勿改动主函数main和其它函数中的任何内容，仅在函数fun的花括号中填入你编写的若干语句。
*/
#include <stdio.h>
int  fun(int a[])
{
	int i,b;
	for (i = 1; i <= 1000; i++)
	{
		if (i % 7 == 0 || i % 11 == 0)
			if (i % 77 != 0)
				a[b++] = i;
		/*
		for (int i = 0 ; i < 1000 ; i++ )
		{
        if(i%7==0)
            if(i%11!=0)
                a[b++]=i;
        if(i%11==0)
            if(i%7!=0)
                a[b++]=i;
		}
		*/	
	}
	return b;
}
int main()
{
	int aa[1000], n, k;
	n = fun(aa);
	for (k = 0; k < n; k++)
		if ((k + 1) % 10 == 0)
			printf("\n");
		else
			printf("%5d", aa[k]);
	return 0;
}
/*
3.请编写函数fun，其功能是：找出2×M整型二维数组中最大元素的值，并将此值返回调用函数。
请勿改动主函数main和其它函数中的任何内容，仅在函数fun的花括号中填入你编写的若干语句。
*/
#include <stdio.h>
#define M 4
int fun(int a[][M])
{
	int i, j, max=a[0][0];
	for (i = 0; i <2; i++)
		for (j = 0; j <M; j++)
			if (max < a[i][j])
				max = a[i][j];
	return max;
}
int main()
{
	int arr[2][M] = { 5,8,3,45,76,-4,12,82 };
	printf("max =%d\n", fun(arr));
	return 0;
}
/*
4. 编写函数fun，其功能是：实现两个字符串的连接(不要使用库函数strcat)，即把p2所指的字符串连接到p1所指的字符串的后面。
例如，分别输入下面两个字符串：
FirstString－－
SecondString
程序输出：
FirstString－－SecondString
请勿改动主函数main和其它函数中的任何内容，仅在函数fun的花括号中填入你编写的若干语句。
*/
#include <stdio.h>
void fun(char p1[], char p2[])
{
	int i, j;
	for (i = 0; p1[i] != '\0'; i++)
		;
	for (j = 0; p2[j] != '\0'; j++, i++)
		p1[i] = p2[j];
	p1[i] = '\0';
}
int main()
{
	char s1[80], s2[40];
	printf("Enter s1 and s2:\n");
	scanf("%s%s", s1, s2);
	printf("s1=%s\n", s1);
	printf("s2=%s\n", s2);
	printf("Invoke fun(s1,s2):\n");
	fun(s1, s2);
	printf("After invoking:\n");
	printf("%s\n", s1);
	return 0;
}
/*
5.编写函数fun，其功能是：利用下面的简单迭代方法求方程cos(x)－x＝0的一个实根。
迭代步骤如下：
(1)取x1初值为0.0；
(2)x0＝x1，将x1的值赋给x0；
(3)x1＝cos(x0)，求出一个新的x1；
(4)若x0－x1的绝对值小于0.000001，执行步聚(5)，否则执行步聚(2)；
(5)所求x1就是方程cos(x)－x＝0的一个实根，作为函数值返回。
程序将输出结果Root＝0.739086。
请勿改动主函数main和其它函数中的任何内容，仅在函数fun的花括号填入你编写的若干语句。
*/
#include <math.h>
#include <stdio.h>
double fun()
{
	double x0, x1, x2, x3;
	x1 = 0.0;
	x3 = 0.000001;
	do
	{
		x0 = x1;
		x1 = cos(x0);
		x2 = fabs(x1 - x0);
	} 
	while (x2>x3);
	return x1;
}
int main()
{
	printf("Root =%f\n", fun());
	return 0;
}
/*
6. 编写函数int fun(int lim, int aa[MAX])，其功能是求出小于或等于lim的所有素数并放在aa数组中，并返回所求出的素数的个数。
请勿改动主函数main和其他函数中的任何内容，仅在函数fun的花括号中填入你编写的若干语句。
*/
#include<stdio.h>
#define MAX 100
int fun(int lim, int aa[MAX])
{
	int i = 0, j = 0, k = 0;
	int count = 0;
	for (i = 2; i <= lim; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
				break;
		}
		if (j >= i)
		{
			aa[k++] = i;
			count++;
		}
	}
	return count;
}
int main()
{
	int limit, i, sum;
	int aa[MAX];
	/*system("CLS");*/
	printf("输入一个整数:");
	scanf("%d", &limit);
	sum = fun(limit, aa);
	for (i = 0; i<sum; i++)
	{
		if (i % 10 == 0 && i != 0)    /*每行输出个数*/
			printf("\n ");
		printf("%5d ", aa[i]);
	}
	return 0;
}
/*
7. 编写函数fun，其功能是：实现B＝A＋A'，即将矩阵A加上A的转置矩阵（把矩阵A的行换成相应的列，得到的新矩阵称为A的转置矩阵），
存放在矩阵B中。计算结果在main函数中输出。
例如，输入下面的矩阵：其转置矩阵为：
程序输出：
请勿请勿改动主函数main和其它函数中的任何内容，仅在函数fun的花括号中填入你编写的若干语句。
*/
#include <stdio.h>
void  fun(int a[3][3], int b[3][3])
{
	int i, j;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			b[i][j] = a[i][j] + a[j][i];
}
int main()   /* 主程序*/
{
	int a[3][3] = { { 1, 2, 3 },{ 4, 5, 6 },{ 7, 8, 9 } }, t[3][3];
	int i, j;
	fun(a, t);
	for (i = 0; i < 3; i++) 
	{
		for (j = 0; j < 3; j++)
			printf("%7d", t[i][j]);
		printf("\n");
	}
	return 0;
}
/*
8. 编写函数void fun(char tt[]，int pp[])，统计在tt所存储的字符串中'a'到'z'26个小写字母各自出现的次数，并依次放在pp所指的数组中。
例如，当输入字符串abcdefgabcdeabc后，程序的输出结果应该是：
3 3 3 2 2 1 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
请勿改动主函数main和其它函数中的任何内容，仅在函数fun的花括号中填入你编写的若干语句。
*/
#include <stdio.h>
#include <string.h>
void fun(char tt[], int pp[])
{
	int t;
	for (t = 0; t<26; t++)
	{
		pp[t] = 0;
	}
	while (*tt != '\0')
	{
		t = *tt - 'a';
		pp[t]++;
		tt++;
	}
}
/*
void fun(char *tt, int pp[])
{
	int i;
	for (i = 0; i < 26; i++)
		pp[i] = 0;
	for (i = 0; tt[i] != '\0'; i++)
		if (tt[i] > 'a'&&tt[i] <= 'z')
			pp[tt[i] - 'a']++;
}
*/
int main()
{
	char aa[1000];
	int  bb[26], k;

	printf("\nPlease enter  a char string:"); scanf("%s", aa);
	fun(aa, bb);
	for (k = 0; k < 26; k++) printf("%d ", bb[k]);
	printf("\n");
	return 0;
}
/*
9. 编写函数fun，其功能是：将a、b中的两个两位正整数合并成一个新的整数放在c中。
合并的方式是：将a中的十位和个位数依次放在变量c的百位和个位上，b中的十位和个位数依次放在变量c的十位和千位上。
例如，当a＝45，b＝12，调用该函数后c＝2415。
请勿改动主函数main和其它函数中的任何内容，仅在函数fun的花括号中填入你编写的若干语句。
*/
#include <stdio.h>
int fun(int a, int b)
{
	int a1, a2, b1, b2,c;
	a1 = a / 10;
	a2 = a % 10;
	b1 = b / 10;
	b2 = b % 10;
	c = b2 * 1000 + a1 * 100 + b1 * 10 + a2;
	return c;
}
int main()
{
	int   a, b; long   c;
	printf("Input a, b:");
	scanf("%d%d", &a, &b);
	c = fun(a, b);
	printf("The result is: %ld\n", c);
	return 0;
}
/*
10.函数fun的功能是：将s所指字符串中下标为偶数的字符删除，剩余字符形成的新串放在t所指数组中。
例如，当s所指字符串中的内容为"ABCDEFGHIJK"时，在t所指数组中的内容应是："BDFHJ"。
请勿改动函数main和其它函数中的任何内容。仅在函数fun的花括号中填入你编写的若干语句。
*/
#include <stdio.h>
#include <string.h>
void fun(char s[], char t[])
{
	int i, j = 0;
	for (i = 1; s[i] != '\0'; i = i + 2)
		t[j++] = s[i];
	t[j] = '\0';
}
/*
void fun(char s[], char t[])
{
	int i, j = 0, k = strlen(s);
	for (i = 1; i < k; i = i + 2)
		t[j++] = s[i];
	t[j] = '\0';
}
*/
int main()
{
	char   s[100], t[100];
	printf("\nPlease enter string S:"); scanf("%s", s);
	fun(s, t);
	printf("\nThe result is: %s\n", t);
	return 0;
}

