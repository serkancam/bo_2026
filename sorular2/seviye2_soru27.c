#include <stdio.h>

int main()
{
    // // Kod çalıştıktan sonra ekran çıktısı ne olur?
    int mat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int res[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            res[j][2 - i] = mat[i][j];
        }
    }
    printf("%d", res[0][1]);
}