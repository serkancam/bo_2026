#include <stdio.h>

int main()
{
    int arr[3] = {10, 20, 30};
    if (arr == &arr[0])
        printf("Esit");
    else
        printf("Farkli");
}