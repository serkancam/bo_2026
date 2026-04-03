#include <stdio.h>

int main()
{
    int r = 0;
    for (int i = 1; i <= 3; i++)
    {
        switch (i)
        {
            case 1:
                r += i;
            case 2:
                r += i * 2;
                break;
            case 3:
                r += i * 3;
        }
    }
    printf("%d", r);
}