#include <stdio.h>

int main()
{
    int toplam = 0;
    for (int i = 5; i <= 15; i += 3)
    {
        toplam += i; // toplam=toplam+(i)
    }
    printf("%d", toplam);
    int a = 10;
    for (;;)
    {
        if (a > 30)
            break;
        printf("test\n");
        a++;
    }

    printf("iç içie döngü\n");
    int i, j;
    for (i = 0; i < 4; i++)
        for (j = i; j < 4; j++)
            printf("*");
}