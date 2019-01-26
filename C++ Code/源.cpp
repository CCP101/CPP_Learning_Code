//#include <stdio.h>
//
//void main()
//{
//	printf("\033[40;31m *你要改变颜色的内容，黑底和红色字* \033[0m \n");
//	printf("\033[47;32m *你要改变颜色的内容，白底和绿色字* \033[0m \n");
//	printf("\033[43;35m *你要改变颜色的内容，黄底和紫色字* \033[0m \n");
//	printf("[0;31m *你要改变颜色的内容* [0;0m\n");
//}
#include<stdio.h>
#define line 14
void square(void);//打印一行方框

int main()
{
	printf("\033[40;32m 你要改变颜色的内容 \033[0m \n");
	getchar();
	square();
}
void square(void)
{
	for (int i = 0; i < line; i++)
		printf("%c", 3);
}