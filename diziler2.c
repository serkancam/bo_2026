#include <stdio.h>

int main()
{
    int d22[2][3]={2,3,4,72,85,12};
    printf("%p\n",d22);
    printf("%p\n",d22+2);
    printf("%d\n",d22[0][1]);   
}