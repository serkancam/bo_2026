#include <stdio.h>

int main()
{
    int i = 3, j = 0;
    while (i-- > 0)
    {
        j += (i == 1) ? 2 : 1;
    }
    printf("%d", j);
}