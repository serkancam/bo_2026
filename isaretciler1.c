#include <stdio.h>

int main()
{
    /*
    türler
    * tam sayılar--> char short int long
    * ondalıklı sayılar--> float double
    * adres tutucular --> char short int long float double
    <tip>* degiskenAdi;

    */

    char s = 'a';
    char t = 'n';
    printf("%c\n", t);

    t = s;
    t = 'r';
    s = 'q';
    printf("%c,%c\n", t, s);
    printf("%c\n", s + 1);
    char *ptr1;
    char *ptr2;

    ptr1 = &s;
    ptr2 = &s;

    printf("%p,%p,%p\n", ptr1, ptr2, &s);
    printf("%c,%c,%c\n", *ptr1, *ptr2, s);
    *ptr1 = 'k';
    printf("%p,%p,%p\n", ptr1, ptr2, &s);
    printf("%c,%c,%c\n", *ptr1, *ptr2, s);

    printf("---------------------\n");
    char isim[20] = "edirne";
    char *cptr = isim;
    printf("%s\n", cptr);
    printf("%s\n", isim);
    *isim = 'q';
    printf("** %s\n", cptr);
    printf("** %s\n", isim);
    *(isim + 1) = 'w';
    printf("*** %s\n", cptr);
    printf("*** %s\n", isim);
    while(*cptr != '\0')
    {
        printf("%c-",(*cptr++));
    }

}
