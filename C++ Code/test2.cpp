#include<stdio.h>
int fun(char* s);

void main() {
    long m;
    char s[100];
    scanf("%s", s);
    m = fun(s);
    printf("%d\n", m);
}

int fun(char* s) {
    int i, t;
    long sum = 0;
    for (i = 0; s[i] != '\0'; i++) 
    {
        if (s[i] <= '9')
        {
            t = s[i] - '0';
        }
        else
        {
            if (s[i]>='A'&& s[i] <= 'Z')
            {
                t = s[i] + 32 - 'a' + 10;
            }
            else
            {
                t = s[i] - 'a' + 10;
            }
        }
        sum = sum * 16 + t;
    }
    return sum;
}