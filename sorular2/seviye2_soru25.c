#include <stdio.h>

int main()
{
    // Kod çalıştıktan sonra a[1][0] hücresinin değeri ne olur?
    int a[3][3];
    int deger = 1;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i % 2 == 0)
                a[i][j] = deger++;
            else
                a[i][2 - j] = deger++;
        }
    }
    printf("%d", a[1][0]);
}