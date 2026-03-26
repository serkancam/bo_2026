#include <stdio.h>

int main()
{
    int m[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
                m[i][j] *= 2;
            else if (i > j)
                m[i][j] -= m[j][i];
        }
    }
    printf("%d", m[2][0] + m[0][2]);
}