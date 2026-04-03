#include <stdio.h>

int main()
{
    char *iller[] = {"ankara", "izmir", "ankara", "edirne", "istanbul"};
    printf("%lu, %lu\n", sizeof(iller), sizeof(*iller));

    int boyut = sizeof(iller) / sizeof(*iller);

    printf("%s\n", iller[2]);
    printf("%c\n", iller[2][2]);
    /* malloc */
    printf("-------------------------\n");
    //= ++ --
    int dizi[5] = {10, 20, 30, 40, 50};
    int *ptr;
    ptr = dizi;
    printf("* %d\n", *ptr + 1);
    printf("** %d\n", ++*ptr);  // 11
    printf("*** %d\n", *++ptr); //*,++//20
    printf("**** %d\n", *dizi);

    //  *ptr+1   *(ptr+1) ++*ptr *++ptr
    //& []
}