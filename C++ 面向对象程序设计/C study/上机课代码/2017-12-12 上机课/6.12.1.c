#include<stdio.h>
int main()
{
  int n,count=0;
  char b[20000];
  gets(b);
  for(n=0;b[n]!= '\0';n++) 
     count++;
  printf("%5d",count);
  return 0;
}