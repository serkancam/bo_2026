#include <stdio.h>

int main()
{
    int a = 18, b = 35, temp;
    printf("%d %d\n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("%d %d\n", a, b);
    printf("-----------------\n");
    int x = 12, y = 9;
    printf("%d %d\n", x, y);
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
    printf("%d %d\n", x, y);
}