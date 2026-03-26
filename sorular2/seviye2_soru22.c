#include <stdio.h>

int main()
{
    int arr[3][2] = {{1, 2}, {3, 4}, {5, 6}};
    for (int i = 0; i < 2; i++)
    {
        arr[i][1] ^= arr[i + 1][0];
        arr[i + 1][0] ^= arr[i][1];
        arr[i][1] ^= arr[i + 1][0];
    }
    printf("%d %d", arr[0][1], arr[2][0]);
}