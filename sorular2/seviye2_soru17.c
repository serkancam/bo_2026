#include <stdio.h>

int main()
{
    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int t = 0;
    for (int i = 0; i < 2; i++)
    {
        t += a[i][i];
    }
    printf("%d", t);
}