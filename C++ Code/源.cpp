//#include <stdio.h>
//
//void main()
//{
//	printf("\033[40;31m *��Ҫ�ı���ɫ�����ݣ��ڵ׺ͺ�ɫ��* \033[0m \n");
//	printf("\033[47;32m *��Ҫ�ı���ɫ�����ݣ��׵׺���ɫ��* \033[0m \n");
//	printf("\033[43;35m *��Ҫ�ı���ɫ�����ݣ��Ƶ׺���ɫ��* \033[0m \n");
//	printf("[0;31m *��Ҫ�ı���ɫ������* [0;0m\n");
//}
#include<stdio.h>
#define line 14
void square(void);//��ӡһ�з���

int main()
{
	printf("\033[40;32m ��Ҫ�ı���ɫ������ \033[0m \n");
	getchar();
	square();
}
void square(void)
{
	for (int i = 0; i < line; i++)
		printf("%c", 3);
}