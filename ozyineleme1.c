#include <stdio.h>
int k=0;
void f(int s)
{
    printf("%d\n", s);
    k+=s;
    if (s > 1)    // temel durum(base)
        f(s - 1); // özyineleme(recursion)
}
void f2(int ilk, int son, int adim)
{

    if (son > ilk)                 // temel durum(base)
        f2(ilk, son - adim, adim); // özyineleme(recursion)
    printf("%d\n", son);
}
void f3(int n)
{
    printf("f3 fonksiyonu yığına %d değeri ile yerşetirildi\n", n);
    if (n > 1)
    {
        f3(n - 1);
        f3(n - 2);
    }
    printf("f3 fonksiyonu yığına %d değerini ekrana yazdırdı\n", n);
}
int fib(int deger)
{
    if (deger < 2)
        return 1;
    return fib(deger-1)+fib(deger-2);
}
int main()
{
    f(5);
    printf("k=%d\n",k);
    f2(10, 40, 5);
    f3(4);
    int sayi;
    sayi=60;
    printf("%d nin fibonaccisi=%d",sayi,fib(sayi));
    //bir 10luk sistemdeki sayının binary karşılığını yazan özyinelemeli fonksiyon
    //girilen bir sayının rakamları toplamını bulan özyinelemeli fonskiyonu yazınız.

    //1+2+3+..+n
    //1. yol:n*(n+1)/2 (sabit sayıda işlem çözüm denir)O(1)
    //2. yol:1 den n e kadar sayıları döngü ile sayıp her sayıyı bir değişkene ekleme(iteratif çözüm) O(n),O(n^2)
    //3. yol: özyinelemei çözüm,O(2^n),O(n!) 

    https://leetcode.com/problems/frog-jump/
}