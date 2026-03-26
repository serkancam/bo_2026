#include <stdio.h>

int main()
{
     // Kod çalıştıktan sonra ekran çıktısı ne olur?
    int p[4][4] = {0};
    for (int i = 0; i < 4; i++)
    {
        p[i][0] = 1;
        for (int j = 1; j <= i; j++)
        {
            p[i][j] = p[i - 1][j - 1] + p[i - 1][j];
        }
    }
    printf("%d", p[3][2]);
}