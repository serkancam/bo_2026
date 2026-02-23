#include <stdio.h>

int main()
{
    printf("merhaba dünya2\n");
    int a; // a tam sayısı için ram de 32 bit yer ayır ve o bölgeyi a temsil etsin
    a = 32;
    int b, c;
    long int d;
    c = 30;
    d = 485;
    b = a;
    c = d;
    d = 10000000000000L;
    printf("%d,%d,%d,%ld \n", a, b, c, d);
    // ben kod değilim
    /*

    ben açıklma satırıyım
    */

    float f1 = 3.8878978;
    double df1 = 3.8878978;
    float f2, f3 = 4;
    printf("f1=%f,f2=%f,df1=%lf\n", f2, f1, df1);

    // sizeof
    printf("%ld\n", sizeof(f1));
    printf("%ld\n", sizeof(f2));
    printf("%ld\n", sizeof(d));

    a = 10, b = 7;

    printf("10/5=%d\n", 10 / 5);
    printf("10/7=%d\n", 10 / 7);
    printf("10/12=%d\n", 10 / 12);
    printf("%f\n", 10 / 7.0);
    printf("%X\n", 17);
    b = 0x22; // 2+16*2=34
    a = 022;
    // 0x???--> hexadecimal(16lık), 0???..--> oktal(8lik) gösterim
    printf("%d,%x,%o\n", b, b, b);

    int toplam;
    toplam = 017 + 0x12A + 12;

    int s1 = 16, s2 = 17, s3 = 18;
    printf("%d\n",toplam);
    toplam += s1++ + ++s2 * --s3;//16+18*17
    /*

    +
    *
    /
    -
    %

    ++  --
    */
    printf("%d,%d,%d,%d\n", s1, s2, s3, toplam);
    char h1='A';
    printf("%c,%d,%c\n",h1,++h1,h1);
    printf( "%d\n",printf("merhaba"));
}