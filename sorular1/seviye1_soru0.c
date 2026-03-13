#include <stdio.h>

int main()
{
    int a=0;
    int i, j, n = 2048;
    for (i = n; i >= 1; i /= 2)
        for (j = 0; j < i; j++)
            printf("%d A\n",++a);
}