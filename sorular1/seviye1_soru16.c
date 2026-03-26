#include <stdio.h>

int main()
{
    int k = 0;
    for (int i = 1; i <= 10; i++)
    {
        if ((i & (i - 1)) == 0)
            k++;
    }
    printf("%d", k);
}