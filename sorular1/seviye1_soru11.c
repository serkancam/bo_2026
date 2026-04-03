#include <stdio.h>

int main()
{
    int a = 10, b = 21;
    if (a > 5)
        if (b < 15)
            a++;
        else
            b++;
    printf("%d", a + b);
}