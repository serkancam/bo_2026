#include <stdio.h>

int main()
{
    int x = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == 1) break;
            if (j == 1) continue;
            x++;
        }
    }
    printf("%d", x);
}