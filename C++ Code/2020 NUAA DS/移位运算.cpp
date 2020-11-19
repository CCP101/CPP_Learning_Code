#include "stdio.h"

char leftshift(char i, int n)
{
if(n < 0)
return -1;
return i<<n;
}

char rightshift(char i, int n)
{
if(n < 0)
return -1;
return i>>n;
}

int main()
{
//leftshift
char a1 = 127;
char a2 = -1;
int i=0;
for( i = 1; i <= 8; i++)
printf("%d<<%d = %d;\n", a1, i, leftshift(a1,i));

for(i = 1; i <= 8; i++)
printf("%d<<%d = %d;\n", a2, i, leftshift(a2,i));

//rightshift
a1 = 127;
a2 = -128;

for(i = 1; i <= 8; i++)
printf("%d>>%d = %d;\n", a1, i, rightshift(a1,i));

for(i = 1; i <= 8; i++)
printf("%d>>%d = %d;\n", a2, i, rightshift(a2,i));

return 0;
}