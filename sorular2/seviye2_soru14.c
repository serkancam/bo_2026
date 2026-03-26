#include <stdio.h>

int main()
{
   int a[] = {1, 2, 3};
    a[a[0]] = a[2];
    printf("%d %d %d", a[0], a[1], a[2]); 
       
}