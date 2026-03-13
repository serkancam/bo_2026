#include <stdio.h>

int main()
{
    int x = 5;
    int y = sizeof(x += 2);
    printf("%d", x);
}