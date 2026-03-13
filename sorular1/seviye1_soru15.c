#include <stdio.h>

int main()
{
    int x = 6;
    int y = (x % 2 == 0) ? ((x % 3 == 0) ? 1 : 2) : 3;
    printf("%d", y);
}