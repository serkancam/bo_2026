#include <stdio.h>

int main()
{
    int a = 0, b = 1, c = 2;
    if (a++ && b++ || c++)
    {
        a++;
    }
    printf("%d %d %d", a, b, c);
}