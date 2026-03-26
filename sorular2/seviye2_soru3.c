#include <stdio.h>

int main()
{
    int a[] = {10, 20, 30, 40};
    for (int i = 0; i < 4; i++)
    {
        a[i] = a[3 - i];
    }
    printf("%d %d %d %d", a[0], a[1], a[2], a[3]);
}