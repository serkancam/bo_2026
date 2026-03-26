#include <stdio.h>

//fonksiyonAdiBoyleOlur
int a;//global değişken
/*1. yol
donus_tipi fonksiyon_adi(parametreler)
{
    işlemler;
    //return bişey
}
*/

/*2.yol(prototip)
donus_tipi fonksiyon_adi(parametreler)
*/

void f1()
{
    printf("merhaba\n");
}
int f2()
{
    return 75;
}
int f3(int a,int b)
{
    // a=78;
    // b=30;
    return a*a-b*b;

}

int tekMi(int sayi)
{

    if(sayi&1)
    return 1;//tek
    else
    return 0;//tek değiş
}
int main()
{//başla
    int a_main=36,b;
    f1();
    printf("%d\n",f2());
    int sonuc=f3(a_main,100);
    printf("a=%d,b=%d\n",a,b);
    printf("sonuc=%d\n",sonuc);
    printf("%d\n",tekMi(3));


    return 0;

}//bitir


/*1. yol
donus_tipi fonksiyon_adi(parametreler)
{
    işlemler;
}
*/
