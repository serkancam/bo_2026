#include <stdio.h>

int main()
{
    int i = 0, t = 0;
    while (i < 3, t < 6)
    {
        t += i++;
    }
    printf("%d %d", i, t);
}