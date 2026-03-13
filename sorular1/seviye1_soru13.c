#include <stdio.h>

int main()
{
    int i, j;
    for (i = 0, j = 5; i < j; i++, j--)
    {
        if (i % 2 != 0)
            continue;
        i++;
    }
    printf("%d %d", i, j);
}