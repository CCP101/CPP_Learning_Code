#include<iostream>
#include<stdlib.h>
int main()
{
    int a = 0, b = 1;
    int *p1 = &a, *p2 = p1;
    // change the value of a pointer.
    p1 = &b;
    // change the value to which the pointer points
    *p2 = b;
    return 0;
}