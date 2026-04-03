#include <stdio.h>

int main()
{
    int n = 5, m = 0, a, b, c;

    for (a = 1; a <= n; a++)
    {
        for (b = a; b <= n; m += b, b++);
        for (c = n; c >= a; m += c, c--);
    }

    printf("m=%d\n", m);
}





