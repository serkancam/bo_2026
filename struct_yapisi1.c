#include <stdio.h>
#include <string.h>

struct tarih
{
    int yil;
    int ay;
    int gun;
};
struct Ogrenci
{
    char ad[50];
    char soyad[50];
    int yas;
    int sinif;
    char sube;

};

int main()
{
    struct tarih odemeTarihi;
    odemeTarihi.yil = 2026;
    odemeTarihi.ay = 12;
    odemeTarihi.gun = 27;
    struct Ogrenci ogrenciler[3];
    ogrenciler[0].yas = 30;
    strcpy(ogrenciler[0].ad, "hasan");
    strcpy(ogrenciler[0].soyad, "yılmaz");
    ogrenciler[0].sinif = 10;
    ogrenciler[0].sube = 'A';
    printf("ogrenciler[0].yas=%d\n", ogrenciler[0].yas);
    printf("ogrenciler[0].ad=%s\n", ogrenciler[0].ad);
    printf("ogrenciler[0].soyad=%s\n", ogrenciler[0].soyad);
    printf("ogrenciler[0].sinif=%d\n", ogrenciler[0].sinif);
    printf("ogrenciler[0].sube=%c\n", ogrenciler[0].sube);
    return 0;
}