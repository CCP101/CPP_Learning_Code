/*2017.10.10 C语言程序设计初步 1.5*/
#include <stdio.h>
int main()
{
	printf("Tis is my first C programme. \n");
	return 0;
}
/*2017.10.12 C语言程序设计 常量2.2*/
#include <stdio.h>
int main()
#define PRICE 30 
{
	int num, total;
	num = 10;
	total = num*PRICE;
	printf("total=%d\n ,total");
	return 0;
}
#include <stdio.h>
int main()
{
	int a;
	unsigned b;
	a = -20;
	b = 40;
	printf("a=%d ,b=%u\n", a, b);
	return 0;
}
#include <stdio.h>
int main()
{
	int a = 0123, b = 0x123;
	printf("a=%d ,b=%d\n", a, b);
	return 0;
}
/*2017.10.13 C语言程序设计 C语言的数据类型*/
#include <stdio.h>
int main()
{
	int a;
	unsigned b;
	a = -20;
	b = 40;
	printf("a=%d,b=%u\n,a,b");
	return 0;
}
#include <stdio.h>
int main()
{
	printf("\101 \x42 C\n");
	printf("I say: \"How are you?\"\n");
	printf("\\C Programme \\\n");
	printf("Turbo \'C\'\n");
	return 0;
}
#include <stdio.h>
int main()
{
	printf("Y\b=\n");
	return 0;
}
#include <stdio.h>
int main()
{
	char ch1, ch2;
	ch1 = 'a';
	ch2 = 'b';
	printf("ch1=%c,ch2=%c\n", ch1, ch2);
	printf("ch1=%d,ch2=%d\n", ch1, ch2);
	return 0;
}
#include <stdio.h>
int main()
{
	char ch1, ch2;
	ch1 = 'a';
	ch2 = 'B';
	printf("ch1=%c,ch2=%c\n", ch1 - 32, ch2 + 32);
	printf("ch1+ch2=%d\n", ch1 + ch2);
	return 0;
}
/*2017.10.13 C语言程序设计 选择正确的数据类型2.3.5*/
#include <stdio.h>
int main()
{
	long int a, b;
	a = 32767;
	b = a + 1;
	printf("a=%ld,b=%ld\n", a, b);
	return 0;
}
#include<stdio.h>
int main()
{
	float f, c;
	f = 64.0;
	c = (5 / 9)*(f - 32);
	printf("f=f%\nc=%f\n", f, c);
	return 0;
}
#include<stdio.h>
int main()
{
	printf("%d,%d,%d\n", sizeof(short int), sizeof(int), sizeof(long int));
	return 0;
}
/*2017.10.19-20 C语言程序设计 条件运算符2.4.5*/
#include<stdio.h>
int main()
{
	char ch;
	printf("Input a character:");
	scanf("%c", &ch);
	ch = (ch >= 'A'&&ch <= 'Z') ? (ch + 32) : ch;
	printf("ch=%c\n", ch);
	return 0;
}
#include<stdio.h>
#include<math.h>
int main()
{
	double x = 9.0;
	double result;
	result = sqrt(x);
	printf("The square root of %lf is %lf.\n", x, result);
	return 0;
}
/*2017.10.24 C语言程序设计 语句与输入输出*/
#include<stdio.h>
int main()
{
	unsigned int a = 65535;
	int b = -2;
	printf("a=%d,%o%x%u\n", a, a, a, a);
	printf("b=%d,%o%x%u\n", b, b, b, b);
	return 0;
}
#include<stdio.h>
int main()
{
	printf("%3s,%7.2s,%.4s,%-5.3s\n","CHINA","CHINA","CHINA","CHINA");
	return 0;
}
#include<stdio.h>
int main()
{
	float x, y;
	double a, b;
	x = 123456.123;
	y = 654321.321;
	b = 7531031008655.23456321;
	printf("%f\n", x + y);
	printf("%lf\n", a + b);
	return 0;
}
#include<stdio.h>
int main()
{
	char a, b, c;
	a = 'C'; b = 'A'; c = 'T';
	putchar(a); putchar(b); putchar(c); putchar('\n');
	putchar('\"'); putchar('\101'); putchar('B'); putchar('c');
	putchar('\"'); 
	putchar('\n');
	return 0;
}
#include<stdio.h>
int main()
{
	char c1='1',c2='2';
	c1=getchar();
	c2=getchar();
	putchar(c1);
	putchar(c2);
	return 0;
}
/*2017.10.27 C语言程序设计 选择程序设计*/
#include<stdio.h>
int main()
{
	int x, y, min;
	printf("Please input two numbers:\n");
	scanf("%d%d", &x, &y);
	min = x;
	if (min > y)min = y;
	printf("min=%d\n", min);
	return 0;
}
#include<stdio.h>
int main()
{
	int x, y;
	printf("Please input:\n");
	scanf("%d", &x);
	if (x >= 0)
	    y = x;
	else
		y = -x;
	printf("y=%d\n", y);
	return 0;
}
#include<stdio.h>
int main()
{
	int x, y;
	printf("Please input:\n");
	scanf("%d", &x);
	if (x != 0)
		if (x > 0) y = 1;
		else y = -1;
	else
		y = 0;
	printf("y=%d\n", y);
	return 0;
}
#include<stdio.h>
int main()
{
	float a, b;
	char c;
	printf("Please input expression:\n");
	scanf("%f%c%f", &a, &c, &b);
	switch (c)
	{
	case'+':printf("%f\n", a + b); break;
	case'-':printf("%f\n", a - b); break;
	case'*':printf("%f\n", a * b); break;
	case'/':printf("%f\n", a / b); break;
	default:printf("Input error\n");
	}
	return 0;
}
/*闰年计算公式*/
#include<stdio.h>
int main()
{
	int year, leap = 0;
	printf("Please input year:");
	scanf("%d", &year);
	if (year % 4 == 0)
		if (year % 100 == 0)
		{
			if (year % 400 == 0) leap = 1;
		}
		else leap = 1;
		/*
		另一种表达形式为
		return!!(y%4==0 && y%100!=0 || y%400==0);
		获得返回值1或0 同下赋予变量leap检验if（leap）
		*/
		if (leap)printf("%d is", year);
		else printf("%d is not", year);
		printf("a leap year.\n");
		return 0;
}
#include<stdio.h>
#include<math.h>
int main()
{
	double a, b, c, disc, x1, x2, realpart, imagpart;
	printf("Please input:\n");
	scanf("%lf,%lf,%lf", &a, &b, &c);
	printf("The equation ");
	if (fabs(a) <= 1e-6)
		printf("is not a quadratic.\n");
	else
	{
		disc = b*b - 4 * a*c;
		if (fabs(disc) <= 1e-6)
			printf("has two equal roots:%8.2f\n", -b / (2 * a));
		else
			if (disc>1e-6)
			{
				x1 = (-b + sqrt(disc)) / (2 * a);
				x2 = (-b - sqrt(disc)) / (2 * a);
				printf("has two distinct real roots:%8.2f and %8.2f\n", x1, x2);
			}
			else
			{
				realpart = -b / (2 * a);
				imagpart = sqrt(-disc) / (2 * a);
				printf(" has comples roots:\n");
				printf("%8.2f+%8.2f\n", realpart, imagpart);
				printf("%8.2f-%8.2f\n", realpart, imagpart);
			}
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int score, grade;
	printf("Please input a score(0~100):");
	scanf("%d", &score);
	grade = score / 10;
	switch (grade)
	{
	case 10:
	case 9:printf("优秀\n");
		break;
	case 8:
	case 7:printf("良好\n");
		break;
	case 6:printf("合格\n");
		break;
	case 5:
	case 4:
	case 3:
	case 2:
	case 1:
	case 0:printf("不及格\n");
		break;
	default:printf("数据出界！\n");
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int a, b, c, d, x, s;
	printf("请输入一个四位整数:");
	scanf("%d", &x);
	if (x <= 9999 && x >= 1000)
	{
		a = x / 1000;
		b = (x % 1000) / 100;
		c = (x % 100) / 10;
		d = x % 10;
		s = a + b + c + d;
		printf("四位整数各位数字之和为:%d\n", s);
	}
	else printf("这不是一个四位整数\n");
	return 0;
}
#include<stdio.h>
int main()
{
	int x, y;
	scanf("%d", &x);
	if (x >= 0)
		if (x < 100)
			if (x < 50) y = 3*x - 2;
			else y = 4 * x + 1;
		else y = 4 * x + 1;
	else y = x;
	printf("%d", y);
	return 0;
}
#include<stdio.h>
int main()
{
	int m=5;
	if(m++ >5) printf("%d\n",m);
	else       printf("%d\n",m--);
	return 0;
}
#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if(a>90)printf("%d",a);/* 缺少break；跳出*/
	if(a>80)printf("%d",a);
	if(a>70)printf("%d",a);
	return 0;
}
#include<stdio.h>
int main()
{
	int x=10,y=20,t=0;
	if(x==y) t=x;x=y;y=t;/*if函数只影响是否执行t=x；*/
	printf("%d,%d\n",x,y);
	return 0;
}
/*2017.11.1 C语言程序设计 循环结构程序设计*/
#include<stdio.h>
int main()
{
	int i = 1, s = 0;
	while (i < 100)
	{
		s = s + i;
		i++;
	}
	printf("1+2+3+...+100=%d\n", s);
	return 0;
}
#include<stdio.h>
int main()
{
	int i = 1, s = 0;
	do
	{
		s = s + i;
		i++;
	} while (i <= 100);
	printf("1+2+3+...+100=%d\n", s);
	return 0;
}
#include<stdio.h>
int main()
{
	int i;
	printf("Please input:i=");
	scanf("%d", &i);
	while (i < 5)
	{
		printf("Hello!\n");
		i++;
	}
	printf("End!\n");
	return 0;
}
#include<stdio.h>
int main()
{
	int i, s = 0;
	for (i = 1; i <= 100; i++)
		s = s + i;
	printf("1+2+3+...+100=%d\n", s);
	return 0;
}
#include<stdio.h>
int main()
{
	int i, n, t;
	printf("Please input:n=");
	scanf("%d", &n);
	for (i = 1, t = 1; i <= n; i++)
		t = t*i;
	printf("%d!=%d\n", n, t);
	return 0;
}
#include<stdio.h>
int main()
{
	int i, a;
	printf("Please input:");
	for (i = 1; i <= 8; i++)
	{
		scanf("%d", &a);
		if (a % 5 == 0)
		{
			printf("%d\n", a);
			break;
		}
	}
	if (i > 8) printf("Not exists\n");
	return 0;
}
#include<stdio.h>
int main()
{
	int n;
	for(n=10;n<=100;n++)
		if (n % 6 == 0)
		{
			printf("%d\n", n);
			break;
		}
	return 0;
}
#include<stdio.h>
int main()
{
	int i, j, n;
	printf("Please input:n=");
	scanf("%d", &n);
	for (i = i; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
			printf("%4d", j);
		printf("\n");
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int n, i;
	float s = 0, t = 0;
	printf("Please input :n=");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		t = t + 1;
		s = s + 1 / t;
	}
	printf("1+1/(1+2)+1/(1+2+3)+...+1/(1+2+3+...+n)=%f\n", s);
	return 0;
}
#include<stdio.h>
#include<math.h>
int main()
{
	int n, i, k, count = 0;
	for (n = 101; n <= 200; n = n + 2)
	{
		k = sqrt(n);
		for (i = 2; i <= k; i++)
			if (n%i == 0)
				break;
		if (i > k)
			count++;
	}
	printf(" count = %d\n", count);
	return 0;
}
#include<stdio.h>
int main()
{
	int chosen = 12, guess, count;
	printf("Guess a number between 1 and 20 \n");
	for (count = 1; count <= 3; count++)
	{
		printf("Please input your number:");
		scanf("%d", &guess);
		if (guess == chosen)
		{
			printf("You got it!\n");
			break;
		}
		else
			printf("Wrong!\n");
	}
	if (count > 3)
		printf("Failed\n");
	return 0;
}
#include<stdio.h>
int main()
{
	char c;
	int capital = 0, lower = 0, digit = 0;
	printf("Please input:");
	c = getchar();
	while (c != '\n')
	{
		if (c >= 'A'&&c <= 'Z')
			capital++;
		else
			if (c >= 'a'&&c <= 'z')
				lower++;
			else
				if (c >= '0'&&c <= '9')
					digit++;
		c = getchar();
	}
	printf("Capital letter:%d\nLower-case letter:%d\nDigit:%d\n", capital, lower, digit);
	return 0;
}
/*2017.11.9 C语言程序设计 数组*/
#include<stdio.h>
int main()
{
	int i, score[10];
	float average, sum = 0;
	printf("Please input:");
	for (i = 0; i <= 9; i++)
	{
		scanf("%d", &score[10]);
		sum += score[i];
	}
	average = sum / 10;
	printf("Output:\n");
	printf("num\tscore\n");
	for (i = 0; i <= 9; i++)
		printf("%3d\t%3d\n", i, score[i]);
	printf("average=%4.1f\n", average);
	return 0;
}
#include<stdio.h>
int main()
{
	int score[10], i, max, min;
	float sum = 0, average;
	printf("Please input:");
	for (i = 0; i <= 9; i++)
		scanf("%d", &score[i]);
	max = score[0];
	min = score[0];
	for (i = 0; i <= 9; i++)
	{
		if (max < score[i])
			max = score[i];
		if (min < score[i])
			min = score[i];
		sum += score[i];
	}
	average = (sum - max - min) / 8;
	printf("average=%4.1f\n", average);
	return 0;
}
#include<stdio.h>
int main()
{
	int a[5], i, j, t;
	printf("Please input:");
	for (i = 0; i < 5; i++)
		scanf("%d", &a[i]);
	for (j = 0; j < 4; j++)
		for (i = 0; i < 4 - j; i++)
		{
			t = a[i];
			a[i] = a[i + 1];
			a[i + 1] = t;
		}
	printf("The sorted numbers:\n");
	for (i = 0; i < 5; i++)
		printf("%3d", a[i]);
	printf("\n");
	return 0;
}
#include<stdio.h>
int main()
{
	int score[3][10], i, j;
	printf("Please input:\n");
	for (i = 0; i <= 2; i++)
		for (j = 0; j <= 2; j++)
			scanf("%d", &score[i][j]);
	printf("Output:\n");
	for (i = 0; i <= 2; i++)
	{
		printf("course%2d:", i);
		for (j = 0; j <= 9; j++)
			printf("%3d", score[i][j]);
		printf("\n");
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int score[3][10], i, j;
	float avg[3] = { 0 };
	printf("Please input:\n");
	for (i = 0; i <= 2; i++)
	{
		printf("course%2d:", i);
		for (j = 0; j <= 9; j++)
			scanf("%d", &score[i][j]);
	}
	printf("Output:\n");
	for (i = 0; i <= 2; i++)
	{
		printf("course%2d:", i);
		for (j = 0; j <= 9; j++)
		{
			printf("%3d", score[i][j]);
			avg[i] += score[i][j];
		}
		printf("\n");
	}
	for (i = 0; i <= 2; i++)
	{
		avg[i] = avg[i] / 10;
		printf("The average of course%2d is %4.1f\n", i, avg[i]);
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int a[3][4] = { {0,1,2,3,},{4,5,6,7},{8,9,10,11} };
	int b[4][3], i, j;
	printf("array a:\n");
	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 3; j++)
		{
			printf("%4d", a[i][j]);
			b[i][j] = a[i][j];
		}
		printf("\n");
	}
	printf("array b:\n");
	for (i = 0; i <= 3; i++)
	{
		for (j = 0; j <= 2; j++)
			printf("%4d", b[i][j]);
		printf("\n");
	}
	return 0;
}
#include<stdio.h>
int main()
{
	char str[6];
	int i;
	printf("Please input: ");
	for (i = 0; i < 5; i++)
		scanf("%c", &str[i]);/*%c控制逐个字符输入输出*/
	str[i] = '\0';
	for (i = 0; str[i] != '\0'; i++)
		printf("\n");
	return 0;
}
#include<stdio.h>
int main()
{
	char str[10];
	printf("Please input:");
	scanf("%s", str);/*%s控制整体输入输出*/
	printf("Output:");
	printf("%s", str);
	printf("\n");
	return 0;
}
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[30] = "nanjing/", str2[10] = "jiangsu", str3[30], str4[10];
	int i;
	strcpy(str3, str1);
	printf("Copy str1 to str3: %s\n", str3);
	strcpy(str4, str2);
	printf("Copy str2 to str4: %s\n", str4);
	strcat(str3, str4);
	printf("Add str4 to the end of str3: %s\n", str3);
	printf("str4: %s\n", str4);
	i = strlen(str1);
	printf("The length of str1 is%2d\n", i);
	if (strcmp(str1, str2) > 0)
		printf("str1>str2\n");
	else
		if(strcmp(str1, str2) < 0)
			printf("str1<str2\n");
		else
			printf("str1=str2\n");
	return 0;
}
#include<string.h>
#include<stdio.h>
int main()
{
	char str1[50], str2[20];
	int i = 0;
	printf("Please input: ");
	gets_s(str2) ;
	while (str2[i] != '\0')
	{
		str1[i] = str2[i];
		i++;
	}
	str1[i] = '\0';
	printf("Output str1: ");
	puts(str1);
	return 0;
}
#include<stdio.h>
int main()
{
	char str[50];
	int i = 0;
	printf("Please input: ");
	gets_s(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a'&&str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	puts(str);
	return 0;
}
#include <stdio.h>
#include <string.h>
int main()
{
	char a[5][10] = {"one", "two", "three", "four", "five"}, str[10];
	int i, j;
	char t;
	for (i = 0; i < 4; i++)
		for (j = i + 1; j < 5; j++)
			if (a[i][0] > a[j][0])
			{
				t = a[i][0];
				a[i][0] = a[j][0];
				a[j][0] = t;
			}
	strcpy(str, a[1]);
	puts(str);
	return 0;
}
/*2017.12.1 C语言程序设计 函数*/
#include<stdio.h>
int main()
{
	char letter(char c1, char c2);
	char ch1, ch2, ch3;
	printf("Please input:");
	scanf("%c%c", &ch1, &ch2);
	ch3 = letter(ch1, ch2);
	printf("ch3=%c\n", ch3);
	return 0;
}
char letter(char c1, char c2);
char letter(char c1, char c2)
{
	char c;
	if (c1 > c2)
		c = c1;
	else
		c = c2;
	return c;
}
float add(float x, float y, float z)
{
	return 0.0f;
}
#include<stdio.h>
int main()
{
	float add(float x, float y, float z);
	void print(float s);
	float a, b, c, sum;
	printf("Please input:");
	scanf("%f %f %f", &a, &b, &c);
	sum = add(a, b, c);
	print(sum);
	return 0;
}
float add(float x, float y, float z);
float add(float x, float y, float z)
{
	float s;
	s = x + y + z;
	return s;
}
void print(float s);
void print(float s)
{
	printf("------------start---------\n");
	printf("Sum of a,b and c is %5.1f\n",s);
	printf("------------end----------\n");
}
#include<stdio.h>
int main()
{
	float average(float x, float y);
	float a, b, avg = 0;
	printf("Please input:");
	scanf("%f %f", &a, &b);
	avg = average(a, b);
	printf("avg=%5.1f\n", avg);
	return 0;
}
float average(float x, float y);
float average(float x, float y)
{
	float s;
	s = (x + y) / 2;
	return s;
}
#include<stdio.h>
int main()
{
	void swap(int x, int y);
	int a = 10, b = 20;
	printf("Before:=a=%d,b=%d\n", a, b);
	swap(a, b);
	printf("After:a=%d,b=%d\n", a, b);
	return 0;
}
void swap(int x, int y);
void swap(int x, int y)
{
	int t;
	t = x;
	x = y;
	y = t;
	printf("In swap():x=%d,y=%d\n", x, y);
}
#include<stdio.h>
int main()
{
	int min3(int a, int b, int c);
	int x, y, z, min;
	printf("Please input:");
	scanf("%d%d%d", &x, &y, &z);
	min = min3(x, y, z);
	printf("min=%d\n", min);
	return 0;
}
int min3(int a, int b, int c);
int min3(int a, int b, int c)
{
	int min2(int m, int n);
	int w;
	w = min2(a, b);
	w = min2(w, c);
	return w;
}
int min2(int m, int n);
int min2(int m, int n)
{
	int t;
	if (m < n)
		t = m;
	else
		t = n;
	return t;
}
#include<stdio.h>
int main()
{
	float a, b, avg = 0;
	printf("Please input:");
	scanf("%f %f", &a, &b);
	avg = average(a, b);
	printf("avg=%5.1f\n", avg);
	return 0;
}
float average( float x, float y);
float average( float x, float y)
{
	float s;
	s = (x + y) / 2;
	return s;
}
#include<stdio.h>
int main()
{
	int rec(int n);
	int m, w;
	printf("Please input: m=");
	scanf("%d", &m);
	w = rec(m);
	printf("m!=%d\n", w);
	return 0;
}
int rec(int n);
int rec(int n)
{
	int t;
	if (n == 1)
		t = 1;
	else
		t = n*rec(n - 1);
	return t;
}
#include<stdio.h>
int main()
{
	void display(int n);
	int i;
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	for (i = 0; i < 10; i++)
		display(a[i]);
	printf("\n");
	return 0;
}
void display(int n);
void display(int n)
{
	printf("%4d", n);
}
#include<stdio.h>
int main()
{
	void output(double b[10]);
	double a[10] = { 1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9,10.1 };
	output(a);
	return 0;
}
void output(double b[10]);
void output(double b[10])
{
	int i;
	printf("Output:");
	for (i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
			printf("\n");
		printf("a[%d]=%4.1f\t", i, b[i]);
	}
	printf("\n");
}
#include<stdio.h>
void fun(int p);
int d = 1;
int main()
{
	void fun(int p);
	int a = 3;
	fun(a);
	d += a++;
	printf("%d\n", d);
	return 0;
}
void fun(int p)
{
	int d = 5;
	d += p++;
	printf("%d ", d);
}
#include<stdio.h>
int f( );
int main()
{
	int f( );
	int i, a = 0;
	for (i = 0; i < 5; i++)
		a += f( );
	printf("%d\n", a);
	return 0;
}
int f( )
{
	static int i = 0;
	int s = 1;
	s += i;
	i++;
	return s;
}
#include<stdio.h>
int main()
{
	extern double a, b, c;
	double sum;
	printf("a=%4.1f\tb=%4.1f\tc=%4.1f\n", a, b, c);
	sum = add1( );
	printf("%4.1f+%4.1f+%4.1f+=%4.1f\n", a, b, c, sum);
	return 0;
}
double a = 3.5, b = 6.7, c = 1.2;
double add1( );
double add1( )
{
	double s;
    s = a + b + c;
	return s;
}
/*2017.12.5 C语言程序设计 编译预处理*/
#include<stdio.h>
#define PI 3.14159
int main()
{
	double r,area;
	printf("Please input r=");
	scanf("%lf",&r);
	area=PI*r*r;
	printf("r=%4.1f\tarea=%4.1f\n",r,area);
	return 0;
}
#include<stdio.h>
#define M 3
#define N M+1
#define NN N*N/2
int main()
{
	printf("%d,",NN);
	printf("%d",5*NN);
	return 0;
}
/*2017.12.12 C语言程序设计 指针*/
#include<stdio.h>
int main()
{
	int m, n, *p1, *p2;
	m = 3;
	n = 10;
	p1 = &m;
	p2 = &n;
	printf("&m=%x\t&n=%x\n", &m, &n);
	printf("&p1=%x\t&p2=%x\n", p1, p2);
	printf("*p1=%d\t*p2=%d\n", *p1, *p2);
	p1 = &n;
	p2 = &m;
	printf("&p1=%x\t&p2=%x\n", p1, p2);
	printf("*p1=%d\t*p2=%d\n", *p1, *p2);
	return 0;
}
#include<stdio.h>
int main()
{
	int *pi;
	int a, b;
	printf("Please input:");
	scanf("%d", pi);
	a = b + 3;
	printf("a=%d,b=%d\n", a, b);
	printf("&a=%x,&b=%x\n", &a, &b);
	return 0;
}
#include<stdio.h>
int main()
{
	int a[10];
	int i;
	printf("Please input(10):");
	for (i = 0; i < 10; i++)
		scanf("%d", &a[i]);
	printf("The data:");
	for (i = 0; i < 10; i++)
		printf("%d", a[i]);
	printf("\n");
	return 0;
}
#include<stdio.h>
int main()
{
	int a[6] = { 0,10,20,30,40,50 }, *pa;
	pa = &a[0];
	printf("%d ", *pa);    /*a[0] 0*/
	printf("%d ", *++pa);  /*a[1] 10*/
	printf("%d ", *pa++);  /*10 a[2]*/
	printf("%d ", (*pa)++);/*20 a[2] 21*/
	printf("%d ", ++(*pa));/*a[2] 22*/
	return 0;
}
#include<stdio.h>
int main()
{
	float f[3][4] = { {0.0,0.1,0.2,0.3},{1.0,1.1,1.2,1.3},{2.0,2.1,2.2,2.3} };
	float *pf;
	int i;
	pf = f[0];
	for (i = 0; i < 12; i++)
	{
		if (i != 0 && i % 4 == 0)
			printf("\n");
		printf("%6.2f", *pf++);
	}
	printf("\n");
	return 0;
}
#include<stdio.h>
int main()
{
	float f[3][4] =
	{
		{ 0.0,0.1,0.2,0.3 },
	    { 1.0,1.1,1.2,1.3 },
	    { 2.0,2.1,2.2,2.3 }
	};
	float(*pf)[4];
	int i, j;
	pf = f;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%6.2f", *(*(pf + i) + j));
		printf("\n");
	}
	return 0;
}
#include<stdio.h>
#include<string.h>
int main()
{
	char *pc;
	pc = "Hello,world.";
	printf("%s", pc);
	printf("\nThe length is :%d\n", strlen(pc));
	return 0;
}
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[] = "Hello,C Program!", str2[20];
	int i;
	for (i = 0; str1[i] != '\0'; i++)
		str2[i] = *(str1 + i);
	str2[i] = '\0';
	printf("str1:%s\n", str1);
	printf("str2:");
	for (i = 0; *(str2 + i) != '\0'; i++)
		printf("%c", str2[i]);
	printf("\n");
	return 0;
}
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[] = "Hello, C program!", str2[20], *ps1, *ps2;
	int i;
	ps1 = str1;
	ps2 = str2;
	for (i = 0; ps1 != '\0'; i++)
		ps2[i] = *(ps1 + i);
	/*
	equal to the phase as these:
	ps2[i]=ps1[i];
	*(ps2+i)=*(ps1 + i);
	*(ps2+i)=ps1[i];
	*/
	ps2[i] = '\0';
	printf("str1:%s\n", ps1);
	printf("str2:");
	for (ps2 = str2; *ps2 != '\0'; ps2++)
		printf("%c", *ps2);
	printf("\n");
	return 0;
}
#include<stdio.h>
int main()
{
	char str1[40] = "Hello, C program!", str2[15] = "work hard !", *ps1, *ps2;
	ps1 = str1;
	ps2 = str2;
	printf("The original str1:%s\n", ps1);
	while (*ps1 != '\0')
		ps1++;
	while (*ps2 != '\0')
	{
		*ps1 = *ps2;
		ps1++;
		ps2++;
	}
	ps1 = '\0';
	ps1 = str1;
	printf("The result of str1:%s\n", ps1);
	return 0;
}
#include<stdio.h>
void swap(int *pa, int *pb)
{
	int temp;
	temp = *pa;
	*pa = *pb;
	*pb = temp;
}
int main()
{
	int a, b;
	a = 3, b = 4;
	printf("The original date:a=%d,b=%d\n", a, b);
	swap(&a, &b);
	printf("the result :a=%d,b=%d\n", a, b);
	return 0;
}
#include<stdio.h>
void max(int *num, int len)
{
	int i, index, max;
	for(i=1,index=0,max=*(num+0);i<len;i++)
		if (*(num + i) > max)
		{
			max = *(num + i);
			index = i;
		}
	printf("Max:%d,Index:%d\n", max, index);
}
int main()
{
	int date[6] = { 4,1,8,2,5,7 };
	max(date, 6);
	return 0;
}
/*2017.12.17 C语言程序设计 结构体与共用体*/
#include<stdio.h>
struct date
{
	int month;
	int day;
	int year;
};
struct student
{
	long int number;
	char name[20];
	struct date birthday;
	unsigned sex;
	float score;
};
struct student stu[3] = { {2013160123,"Zhang Yin",8,24,1994,1,90},
                          {2013160124,"Qian Feng",11,5,1995,0,85},
                          {2013160125,"Liu Liang",2,15,1994,1,88} };
int main()
{
	int i;
	long int number;
	printf("Please input(number):");
	scanf("%ld", &number);
	for (i = 0; i < 3; i++)
	{
		if (number == stu[i].number)
		{
			printf("Number\t\tName\t\tMonth\t\tDay\tYear\tSex\tScore\n");
			printf("%ld\t%s\t%d\t%d\t%d\t%d\t%5.2f\n", stu[i].name, 
			stu[i].birthday.month, stu[i].birthday.day, stu[i].birthday.year, stu[i].sex, stu[i].score);
			break;
		}
	}
	if (i >= 3)
		printf("Number:%ld dose not  exit!!!\n", number);
	return 0;
}
#include<stdio.h>
struct studenta
{
	double score;
	long int no;
	char name[20];
	unsigned sex;
};
int main()
{
	struct studenta std1, *sp;
	sp = &std1;
	printf("Please input(no):");
	scanf("%ld", &std1.no);
	getchar();
	printf("Please input(name)");
	gets_s(sp->name);
	(*sp).sex = 0;
	(&std1)->score = 92;
	printf("The information: \n");
	printf("No\t\tName\t\tSex\tScore\n");
	printf("%ld\t%s\t%d\t%5.2f\n", std1.no, std1.name, std1.sex, std1.score);
	printf("%ld\t%s\t%d\t%5.2f\n", (*sp).no,(*sp).name,(*sp).sex,(*sp).score);
	printf("%ld\t%s\t%d\t%5.2f\n", sp->no,sp->name,sp->sex,sp->score);
	printf("%ld\t%s\t%d\t%5.2f\n", (&std1)->no,(&std1)->name,(&std1)->sex,(&std1)->score);
	return 0;
}
#include<stdio.h>
struct student
{
	long int no;
	char name[20];
	unsigned sex;
};
int main()
{
	struct student *sp;
	struct student stu[3] = { {2013160123,"Zhang Yin",1},
	                                     {2013160124,"Qian Feng",0},
	                                     {2013160125,"Liu Liang",1} };
	printf("The information: \n");
	printf("No\t\tName\t\tSex\n");
	for (sp = stu; sp < stu + 3; sp++)
		printf("%d\t%s\t%d\n", sp->no, sp->name, sp->sex);
	return 0;
}
#include<stdio.h>
struct data
{
	int mouth;
	int day;
	int year;
};
struct student2
{
	long int no;
	char name[20];
	struct date birthday;
};
struct student2 stu[3] = { {2013160123,"Zhang Yin",8,24,1994},{2013160124,"Qian Feng",11,5,1995},{2013160125,"Liu Yang",2,15,1994} };
int main()
{
	int getage(int year);
	int i;
	printf("The information:\n");
	printf("No\t\tName\t\tYear\tAge\n");
	for (i = 0; i < 3; i++)
		printf("%ld\t%s\t%d\t%d\n", stu[i].no, stu[i].name, stu[i].birthday.month, getage(stu[i].birthday.year));
	return 0;
}
int getage(int year)
{
	return 2013 - year;
}
#include<stdio.h>
struct date
{
	int month;
	int day;
	int year;
};
struct student2
{
	long int no;
	char name[20];
	struct date birthday;
};
struct student2 stu[3] = { { 2013160123,"Zhang Yin",8,24,1994 },{ 2013160124,"Qian Feng",11,5,1995 },{ 2013160125,"Liu Yang",2,15,1994 } };
int main()
{
	int getage(int year);
	int i;
	printf("The information:\n");
	printf("No\t\tName\t\tYear\tAge\n");
	for (i = 0; i < 3; i++)
		printf("%ld\t%s\t%d\t%d\n", stu[i].no, stu[i].name, stu[i].birthday.year, getage(stu[i].birthday.year));
	return 0;
}
int getage(struct student2 data)
{
	return 2013 - data.birthday.year;
}
#include<stdio.h>
struct date
{
	int month;
	int day;
	int year;
};
struct student2
{
	long int no;
	char name[20];
	struct date birthday;
};
struct student2 stu[3] = { { 2013160123,"Zhang Yin",8,24,1994 },{ 2013160124,"Qian Feng",11,5,1995 },{ 2013160125,"Liu Yang",2,15,1994 } };
int getage1(struct student2 *sp)
{
	return 2013-sp->birthday.year;
}
int main()
{
	int i;
	printf("The information:\n");
	printf("No\t\tName\t\tYear\tAge\n");
	for (i = 0; i < 3; i++)
		printf("%ld\t%s\t%d\t%d\n", stu[i].no, stu[i].name, stu[i].birthday.year, getage1( &stu[i]));
	return 0;
}
#include<stdio.h>
struct student3
{
	long int no;
	char name[20];
	unsigned sex;
};
int main()
{
	struct student3 setdata();
	struct student3 std1;
	std1=setdata();
	printf("The information: \n");
	printf("No\t\tName\t\tSex\n");
	printf("%d\t%s\t\t%d\n",std1.no,std1.name,std1.sex);
	return 0;
}
struct student3 setdata()
{
	struct student temp;
	printf("Please input(No):");
	scanf("%ld",&temp.no);
	getchar();
	printf("Please input(Name):");
	gets_s(temp.name);
	printf("please input(sex):");
	scanf("%d",&temp.sex);
	return temp;
}
#include<stdio.h>
union data
{
	int i;
	char ch;
	float f;
};
struct data2
{
	int i;
	char ch;
	float f;
};
int main()
{
	union data ud;
	struct data2 sd;
	ud.i = 10, ud.ch = 'A';
	ud.f = 20;
	sd.i = 10, sd.ch = 'A';
	sd.f = 20;
	printf(" size of ud :%d, size of sd:%d\n ",sizeof ud,sizeof sd);
	printf("ud.i:%d,ud.ch:%c,ud.f:%f\n",ud.i,ud.ch,ud.f);
	printf("sd.i:%d,sd.ch:%c,sd.f:%f\n", sd.i, sd.ch, sd.f);
	return 0;
}
/*2017.12.20 C语言程序设计 文件操作*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char ch, filename[20];
	printf("Please input(file name):");
	scanf("%s", filename);
	getchar();
	if ((fp = fopen(filename, "w")) == NULL)
	{
		printf("Can not open file.\n");
		exit(0);
	}
	printf("Please input(end of !):");
	ch = getchar();
	while (ch != '!')
	{
		fputc(ch, fp);
		putchar(ch);
		ch = getchar();
	}
	putchar('\n');
	fclose(fp);
	return 0;
}
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *in,*out;
	char ch,infile[20],outfile[20];
	printf("Please input(name of source):");
	scanf("%s",infile);
	getchar();
	printf("Please input(name of destination):");
	scanf("%s",outfile);
	getchar();
	if((in=fopen(infile,"r"))==NULL)
	{
		printf("Can not open file.\n");
		exit(0);
	}
	if((out=fopen(outfile,"w"))==NULL)
	{
		printf("Can not open file.\n");
		exit(0);
	}
	while(!feof(in))
	{
		ch=fgetc(in);
		fputc(ch,out);
	}
	fclose(in);
	fclose(out);
	return 0;
}
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE *fp;
	char outstr[]="Hello,C Programme!";
	char instr[25];
	if((fp=fopen("data.txt","w"))==NULL)
	{
		printf("Can not open data.txt!");
		exit(0);
	}
	fputs(outstr,fp);
	fclose(fp);
	if((fp=fopen("data.txt","r"))==NULL)
	{
		printf("Can not open data.txt!");
		exit(0);
	}
	fgets(instr,strlen(outstr)+1,fp);
	puts(instr);
	fclose(fp);
	return 0;
}
#include<stdio.h>
#include<stdlib.h>
#define SIZE 3
struct employee
{
	unsigned short int no;
	char name[20];
	short int salary;
}emp[6],result[6];
void scanf_data()
{
	int i;
	printf("Please input(%d-employe)\nName\tSalary\n",SIZE);
	for(i=0;i<SIZE;i++)
	{
		emp[i].no=i+1;
		scanf("%s%d",emp[i].name,&emp[i].salary);
	}
}
void write_data()
{
	FILE *fp;
	int i;
	if((fp=fopen("employee.txt","rb"))=NULL)
	{
		printf("Can not open the file.\n!");
		exit(0);
	}
	printf("The data from disk:\n");
	for(i=0;i<SIZE;i++)
	{
		if(fread(&result[i],sizeof(struct employee),1,fp)!=1)
           printf("Can not operate file!");
		printf("%d ,%s ,%d \n",result[i].no,result[i].name,result[i].salary);
	}
	fclose(fp);
}
void save_data()
{
	FILE *fp;
	int i;
	if((fp=fopen("employee.txt","rb"))=NULL)
	{
		printf("Can not open the file.\n");
		exit(0);
	}
	for(i=0;i<SIZE;i++)
		if(fwrite(&emp[i],sizeof(struct employee),1,fp)!=1)
           printf("Can not operate file!");
	fclose(fp);
}
int main()
{
	scanf_data();
	save_data();
	write_data();
	return 0;
}
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE *fp;
	char outstr[]="hello,C program!";
	char instr[25];
	if((fp=fopen("data.txt","w+"))=NULL)
	{
		printf("Can not open data.txt!");
		exit(0);
	}
	fputs(outstr,fp);
	rewind(fp);
	fgets(instr,strlen(outstr)+1,fp);
	puts(instr);
	fclose(fp);
	return 0;
}
#include<stdio.h>
#include<stdlib.h>
#define SIZE 3
struct employee{
	unsigned short int no;
	char name[20];
	short int salary;
}emp2;
int main()
{
	FILE *fp;
	int i;
	if((fp=fopen("employee.txt","rb"))=NULL)
	{
		printf("Can not open the file.\n");
		exit(0);
	}
	printf("No\tName\tSalary\n");
	for(i=0;i<SIZE;i+=2)
	{
		fseek(fp,i*sizeof(struct employee),0);
		if(fread(&emp,sizeof(struct employee),1,fp)!=1)
		   printf("Can not open employee.txt!");
		else
		   printf("%d\t%s\t%d \n",emp2.no,emp2.name,emp2.salary);
	}
	fclose(fp);
	return 0;
}