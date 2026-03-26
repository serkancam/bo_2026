#include <stdio.h>

int main()
{

    int arr[2][2] = {{2, 4}, {6, 8}};
    int i = 0;
    arr[i][i + 1] = arr[i + 1][i]++ + ++arr[i][i];
    printf("%d %d", arr[0][1], arr[1][0]);
}