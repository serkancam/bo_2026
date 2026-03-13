#include <stdio.h>

int main()
{
    int s = 0;
    for (int i = -4; i <= 4; i += 3)
    {
        s += i % 3;
    }
    printf("%d", s);
}