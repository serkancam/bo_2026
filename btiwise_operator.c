#include <stdio.h>

int main()
{
    int a=18,b=35;

    printf("a&b-->%d\n",a&b);//ve
    printf("a|b-->%d\n",a|b);//veya
    printf("a^b-->%d\n",a^b);//ya da
    printf("~a-->%d,~b-->%d\n",~a,~b);
    printf("~a-->%d,~b-->%d\n",~(a-1),~(b-1));

    printf("a<<2-->%d\n",a<<2);
    printf("b>>2-->%d\n",a>>3);




}