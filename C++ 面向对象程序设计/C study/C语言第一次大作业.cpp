/*C语言大作业第一题*/
#include<stdio.h>
int main()
{
	int x, i, count = 0, a, b, c;
	printf("满足条件的数字为");
	for (i = 200; i <= 300; i++)
	{
		a = i / 100;
		b = (i / 100)% 10;
		c = i % 10;
		if (a*b*c == 42 && a + b + c == 12)
		{
			printf("%d ", i);
			count++;
			if (count % 5 == 0) printf("\n");
		}
	}
	printf("\n满足条件的数字个数为%d", count);
	return 0;
}
/*C语言大作业第二题*/
#include<stdio.h>
#include<math.h>
int main()
{
	int a, b, c, d, i, x, count = 0;
	printf("满足条件的数字为\n");
	for (i = 1000; i <= 9999; i++)
	{
		a = i / 1000;
		b = (i % 1000) / 100;
		c = (i % 100) / 10;
		d = i % 10;
		x = sqrt(i);
		if (x*x == i&&a + c == 10 && b*d == 12)
		{
			printf("%d ", i);
			count++;
			if (count % 5 == 0) printf("\n");
		}
	}
	printf("\n满足条件的数字个数为%d\n", count);
	return 0;
}
/*C语言大作业第三题*/
#include<stdio.h>
int main()
{
	int a, b, c, d, i, count = 0;
	printf("满足条件的四叶玫瑰花数为\n");
	for (i = 1000; i <= 9999; i++)
	{
		a = i / 1000;
		b = (i % 1000) / 100;
		c = (i % 100) / 10;
		d = i % 10;
			if (i==a*a*a*a+b*b*b*b+c*c*c*c+d*d*d*d)
			{
				printf("%d ", i);
				count++;
				if (count % 5 == 0) printf("\n");
			}
	}
	printf("\n满足条件的四叶玫瑰花数个数为%d\n", count);
}
/*C语言大作业第四题*/
#include<stdio.h>
#include<math.h>
int main()
{
	int n, i, count = 0;
	double k;
	printf("100～700之间素数为：\n");
	for (n = 100; n <= 700; n++)
	{
		k = sqrt(n);
		for (i = 2; i<n; i++)
			if (n%i == 0)
				break;
		if (i == n)
		{
			printf("%ld ", i);
			count++;
			if (count % 5 == 0) printf("\n");
		}
	}
	printf("\n素数的个数为%d\n", count);
	return 0;
}
/*C语言大作业第五题*/
#include<stdio.h>
int main()
{
	int x, i,count=0;
	printf("请输入一个数字：");
	scanf("%d", &x);
	for (i = 1; i <= 100; i++)
		if (x%i == 0)
		{
			printf("%d ", i);
			count++;
			if (count % 5 == 0) printf("\n");
		}
	printf("\n有%d个整数能被%d整除\n", count,x);
	return 0;
}
/*C语言大作业第六题*/
#include<stdio.h>
int main()
{
	int a, b;
	for (a = 1; a <= 4; a++)
	{
		for (b = 4 - a; b>0; b--)
			printf(" ");
		for (b = 2 * a - 1; b>0; b--)
			printf("*");
		printf("\n");
	}
	for (a = 4; a>1; a--)
	{
		for (b = 5 - a; b>0; b--)
			printf(" ");
		for (b = 2 * a - 3; b>0; b--)
			printf("*");
		printf("\n");
	}
	return 0;
}
/*C语言大作业第七题*/
#include<stdio.h>
int main()
{
	int x, i,count=0;
	printf("100以内能被3整除且个位数字为9的正整数为：\n");
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9 && i % 3 == 0)
		{
			printf("%d ", i);
			count++;
			if (count % 5 == 0) printf("\n");
		}
	}
	printf("\n100以内能被3整除且个位数字为9的正整数有%d个\n",count);
	return 0;
}
/*C语言大作业第八题*/
#include<stdio.h>
#include<math.h>
int main()
{
	int x, i, a, b, c, d, k;
	for (i = 1000; i <= 9999; i++)
	{
		a = i / 1000;
		b = (i % 1000) / 100;
		c = (i % 100) / 10;
		d = i % 10;
		k = sqrt(i);
		if (b==a)
			if(c == d&&a != c)
			    if (i == k*k)
				    printf("符合条件的数字为%d\n", i);
	}
	return 0;
}
/*C语言大作业第九题*/
#include<stdio.h>
int main()
{
	char z;
	int  a=0/*英文字母*/,b=0/*空格*/,c=0/*数字*/,d=0/*其他字符*/;
	printf("请输入一行字符:");
	z = getchar();
	while (z != '\n')
	{
		if (z >= 'A'&&z<= 'Z'|| z >= 'A'&&z <= 'Z')
			a++;
			else
				if (z >= '0'&& z<= '9')
				c++;
				else
					if (z == ' ')
					b++;
					else
					d++;
		z = getchar();
	}
	printf("次行字符有%d个英文字母，%d个空格，%d个数字，%d个其他字符\n",a,b,c,d);
	return 0;
}
/*C语言大作业第十题*/
#include<stdio.h>
int main()
{
	int i,count=0,leap=0;
	printf("公元1600到公元2016年所有的闰年年号为：\n");
	for (i = 1600; i <= 2016; i++)
	{
		if (i % 4 == 0)
			if (i % 100 == 0)
			{
				if (i % 400 == 0) leap = 1;
			}
			else leap = 1;
			if (leap)
			{
				printf("%d ", i);
				count++;
				if (count-1!=0&&count % 5 == 0) printf("\n");
			}
	}
	return 0;
}
/////////////////////////////////////////////////////////////////////////////////////
/*第一题*/
#include<stdio.h>
int main()
{
	int a, b, c, i, count = 0;
	for (i = 200; i <= 300; i++)
	{
		a = i / 100, b = (i % 100) / 10, c = i % 10;
		if (a*b*c == 42 && a + b + c == 12)
		{
			count++;
			if ((count - 1) != 0 && (count - 1) % 5 == 0)
				printf("\n");
			printf("%4d", i);
		}
	}
	printf("\n");
	printf("count=%d\n", count);
	return 0;
}
/*第二题*/
#include<stdio.h>
#include<math.h>
int main()
{
	int a, b, c, d, t, m, count = 0;
	for (t = 1000; t<10000; t++)
	{
		a = t / 1000;
		b = (t % 1000) / 100;
		c = (t % 100) / 10;
		d = t % 10;
		m = (int)sqrt(t);
		if (m*m == t && a + c == 10 && b*d == 12)
		{
			count++;
			if (count != 1 && (count - 1) % 5 == 0)
				printf("\n");
			printf("%6d", t);
		}
	}
	printf("\n");
	printf("count=%d\n", count);
	return 0;
}
/*第三题*/
#include<stdio.h>
int main()
{
	int a, b, c, d, i, count = 0;
	for (i = 1000; i<10000; i++)
	{
		a = i / 1000;
		b = (i % 1000) / 100;
		c = (i % 100) / 10;
		d = i % 10;
		if (i == a*a*a*a + b*b*b*b + c*c*c*c + d*d*d*d)
		{
			count++;
			if (count != 1 && (count - 1) % 5 == 0)
				printf("\n");
			printf("%6d", i);
		}
	}
	printf("\n");
	printf("count=%d\n", count);
	return 0;
}
/*第四题*/
#include<stdio.h>
#include<math.h>
int main()
{
	int n, i, k, count = 0;
	for (n = 101; n <= 700; n = n + 2)
	{
		k = (int)sqrt(n);
		for (i = 2; i <= k; i++)
			if (n%i == 0)
				break;
		if (i>k)
		{
			count++;
			if (count != 1 && (count - 1) % 5 == 0)
				printf("\n");
			printf("%6d", n);
		}
	}

	printf("\ncount=%d\n", count);
	return 0;
}
/*第五题*/
#include<stdio.h>
int main()
{
	int n, i, count = 0;
	printf("Please input:");
	scanf("%d", &n);
	for (i = 1; i <= 100; i++)
	{
		if (i%n == 0)
		{
			count++;
			if (count != 1 && (count - 1) % 5 == 0)
				printf("\n");
			printf("%6d", i);
		}
	}
	printf("\ncount=%d\n", count);
	return 0;
}
/*第六题*/
#include<stdio.h>
int main()
{
	int i, j, k;
	for (i = 0; i <= 3; i++)
	{
		for (j = 0; j <= 2 - i; j++)
			printf(" ");
		for (k = 0; k <= 2 * i; k++)
			printf("*");
		printf("\n");
	}
	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= i; j++)
			printf(" ");
		for (k = 0; k <= 4 - 2 * i; k++)
			printf("*");
		printf("\n");
	}
	return 0;
}
/*第七题*/
#include<stdio.h>
int main()
{
	int i, count = 0;
	for (i = 0; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 10 == 9)
		{
			count++;
			if (count != 1 && (count - 1) % 5 == 0)
				printf("\n");
			printf("%6d", i);
		}
	}
	printf("\ncount=%d\n", count);
	return 0;
}
/*第八题*/
#include<stdio.h>
#include<math.h>
int main()
{
	int a, b, c, d, t, m;
	for (t = 1000; t<10000; t++)
	{
		a = t / 1000;
		b = (t % 1000) / 100;
		c = (t % 100) / 10;
		d = t % 10;
		m = (int)sqrt(t);
		if (m*m == t && a == b && c == d)
			printf("这个数是%d\n", t);
	}
	return 0;
}
/*第九题*/
#include<stdio.h>
int main()
{
	char c;
	int a = 0, b = 0, e = 0, d = 0;
	printf("Please input:");
	c = getchar();
	while (c != '\n')
	{
		if (c == 32)
			a++;
		else
			if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
				b++;
			else
				if (c >= '0' && c <= '9')
					e++;
				else
					d++;
		c = getchar();
	}
	printf("英文字母个数%d个,空格个数%d个,数字个数%d个,其他字符个数%d个\n", b, a, e, d);
	return 0;
}
/*第十题*/
#include<stdio.h>
int main()
{
	int i, count = 0;
	for (i = 1600; i <= 2016; i++)
	{
		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
		{
			count++;
			if (count != 1 && (count - 1) % 5 == 0)
				printf("\n");
			printf("%6d", i);
		}
	}
	printf("\n");
	return 0;
}