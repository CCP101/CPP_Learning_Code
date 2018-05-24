#include<stdio.h>
int main()
{
	char ch;
	printf("Please input a character:\n");
	scanf("%c",&ch);
	if(ch>='a'&&ch<='z')
		printf("%c\n",ch-32);
	else printf("%c\n",ch);
	return 0;
}