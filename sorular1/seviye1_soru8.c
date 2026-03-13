#include <stdio.h>

int main()
{
    int a = 1, b = 2, c = 3;
    int k = a > 2 ? b : c > 2 ? a : b;
    printf("%d", k);
}