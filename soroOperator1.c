#include <stdio.h>

int main()
{
    int a=18,b=35,c=72;

    c = (a++<78) || (--b<33);

    printf("%d %d %d",a,b,c);


}