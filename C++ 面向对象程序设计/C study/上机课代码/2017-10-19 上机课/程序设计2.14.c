#include<stdio.h>
int main()
{
	char ch;
	printf("Input a character:");
	scanf("%c",&ch);
	ch=(ch >='A'&& ch<='Z')?(ch+32):ch;
	printf("ch=%c\n",ch);
	return 0;
}