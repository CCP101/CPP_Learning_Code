#include <stdio.h> 
#include <stdlib.h> 

int del(int array[], int count, int num)
{
    int i, j;
    for (i = 0; i < count; i++)
        if (array[i] % num == 0)
        {
            for (j = i; j < count; j++)
                array[j] = array[j + 1];
            count--;
            i--;
        }
    return count;
}

int main()
{
    int array[100] = {0}, count, num,*p;

    scanf("%d%d", &count, &num);
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &array[i]);
    }
    p = array;
    count = del(p, count, num);

    int temp = 0;
    for (int i = 0; i < count - 1; i++) 
    {
        for (int j = 0; j < count - 1 - i; j++) 
        {
            if (array[j] > array[j + 1]) 
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < count; i++)
    {
        if (array[i] >= 65 && array[i] <= 90)
            printf("%c ", array[i]);
        else
            printf("%d ", array[i]);
    }
    return 0;
}
