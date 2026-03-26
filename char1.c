#include <stdio.h>

int main()
{
    char c1 = 'm'; //'',  ""
    printf("%d %c\n", c1, c1);
    // karakter katarı(string)
    char isim[] = "lise son";
    isim[8] = '4';

    printf("%s\n", isim);
    printf("%u\n", sizeof(isim));
    int i = 0;
    while (isim != '\0')
    {
        printf("%c", isim[i]);
        i++;
    }
    printf("\nadres=%p\n", isim); // referans tipler
    printf("adres=%p\n", &isim[0]);
    printf("adres=%p\n", &i); // değer
    // char soyad[];
    // soyad= "mehmet";
}