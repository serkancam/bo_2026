#include <stdio.h>

int main()
{
    int arr[] = {2, 4, 6, 8};
    int i = 1;
    int k = arr[i++];
    printf("%d %d", k, arr[i]);
}