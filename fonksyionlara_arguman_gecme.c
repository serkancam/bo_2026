#include <stdio.h>
#include <stdlib.h>

int global=30;
int a=8;

void f1(int a) // değer alıyor
{
    a += 20;
    printf("f1 içinde a=%d\n", a);
}
void f2(int *a) // adres alıyor
{
    *a += 20;
    printf("f2 içinde a=%d\n", *a);
}
int f3(int p[], int k)
{
    p[k] = k;
    *(p + 2) = k; // p[2]=k
    return p[k - 1];
}
int *diziOlustur(int bas, int bit, int adim)
{
    // 20    //60  //7
   int eleman = (bit - bas) / adim + 2;
    int *dizi = (int *) malloc(eleman * sizeof(int));
    dizi[0] = eleman;

    for (int i = bas, t = 1; i <= bit; i += adim, t++)
    {
        dizi[t] = i;
    }
    printf("fonksiyon çalıştı");
    return dizi;
}
void bos()
{
    global*=2;
}
int main()
{
    printf("main başı a=%d\n",a);
    int a = 45;
    int c = 785;
    int d1[5] = {20, 405, 30, 40, 50};
    int *ptr1 = &c;
    f1(30);
    f1(a);
    f2(&a);
    f2(ptr1);
    printf("main içinde a=%d\n", a);
    printf("main içinde c=%d\n", c); //
    printf("%d\n", f3(d1, 2));       //
    int *ptr = diziOlustur(20, 60, 7);
    for(int i=0;i<ptr[0];i++)
    {
        printf("dizi[%d].=%d\n",i,*(ptr+i));
    }
  
    printf("-------------------------------\n");
    printf("global=%d\n",global);
    global+=25;
    printf("global=%d\n",global);
    bos();
    printf("global=%d\n",global);
    //int a=8;

    {
        printf("testnoktası1 a=%d\n",a);
        int a=8;
        printf("testnoktası2 a=%d\n",a);
    }
    printf("testnoktası3 a=%d\n",a);


}
