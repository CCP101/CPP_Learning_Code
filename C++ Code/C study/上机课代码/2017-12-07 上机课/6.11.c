#include<stdio.h>
#include<string.h>
int main()
{
	char a[80],b[40];
	int i,j;
	printf("Please input:\n");
	gets(a);
	gets(b);
	for(i=0;a[i]!='\0';i++)
		;
	for(j=0;b[j]!='\0';i++,j++)
		a[i]=b[j];
    a[i]='\0';
	printf("The result:\n");
	for(i=0;a[i]!='\0';i++)
		printf("%c",a[i]);
	printf("\n");
	return 0;
}