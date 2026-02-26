#include <stdio.h>

int main()
{
    /**

     if(şart1)
     ifade1;
     ifade2;



     */
    int a = 5, b = 12, c = 7;
    if (a > 2)
    {
        printf("merhaba");
        printf("test.");
    }
    else
        printf("hata");
    printf("test2322");
    printf("---------------\n");
    if (c < a)
        printf("sayı a ve b den küçük");
    else if (c == a)
        printf("sayı a  ya eşit");
    else if (c > a && c < b)
    {
        printf("sayı a  ile b arasında");
        printf("aradığımız durum bu");
    }
    else if (c == b)
        printf("sayı b ye eşit");
    else // if(c>b)
        printf("sayı b den büyük");
}