#include <stdio.h>

int main()
{
    int c = 0;
    for (int i = 0; i < 8; i++)
    {
        if (i & 1)
            continue;
        c += i ^ 2;
    }
    printf("%d", c);
}