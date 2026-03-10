#include <stdio.h>

int main()
{
    int a = 30;
    do
    {

        printf("%d-", a);
        a -= 2;
    } while (a > 5);
    printf("***%d***", a);
}
