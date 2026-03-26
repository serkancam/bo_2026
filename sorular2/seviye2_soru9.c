#include <stdio.h>

int main()
{
    int a[3] = {1, 2, 3};
    int b[3];
    b = a;
    printf("%d", b[0]);
}