#include <stdio.h>

int main()
{
    int x = 5;
    do
    {
        x -= 2;
    } while (x > 10);
    printf("%d", x);
}