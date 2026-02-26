#include <cmath>
#include <string>
#include <iostream>



using namespace std;
#define M_PI 3.14159265358979323846

// Temel Şekil sınıfı
class Sekil
{
public:
    // Sanal bir alan hesaplama metodu
    virtual double alanHesapla() const = 0;
    // Sanal bir çevre hesaplama metodu
    virtual double cevreHesapla() const = 0;
    // Şeklin adını döndüren sanal bir metot
    virtual string getAd() const = 0;
    // Sanal bir bilgi yazdırma metodu
    virtual void bilgiYazdir() const = 0;
    // Temel sınıfın yıkıcısı (türetilmiş sınıfların doğru bir şekilde yıkılmasını sağlar.)
virtual ~Sekil() {}
};
// Dikdörtgen sınıfı (Şekil›den türetilir.)
class Dikdortgen : public Sekil
{ //
private:
    double uzunluk;
    double genislik;

public:
    // Yapıcı metot
    Dikdortgen(double _uzunluk, double _genislik) : uzunluk(_uzunluk), genislik(_genislik)
    {
        if (uzunluk <= 0 || genislik <= 0)
        {
            cerr << "Hata: Dikdörtgen uzunluk ve genişlik pozitif olmalıdır." << endl;
            uzunluk = 1.0;
            genislik = 1.0;
        }
    }
    // Alan hesaplama metodu
    double alanHesapla() const override
    {
        return uzunluk * genislik;
    }
    // Çevre hesaplama metodu
    double cevreHesapla() const override
    {
        return 2 * (uzunluk + genislik);
    }
    // Şeklin adını döndürme metodu
    string getAd() const override
    {
        return "Dikdörtgen";
    }
    // Bilgi yazdırma metodu
    void bilgiYazdir() const override
    {
        cout << "Şekil: " << getAd() << endl;
        cout << "Uzunluk: " << uzunluk << endl;
        cout << "Genişlik: " << genislik << endl;
        cout << "Alan: " << alanHesapla() << endl;
        cout << "Çevre: " << cevreHesapla() << endl;
    }
};
// Daire sınıfı (Şekil›den türetilir.)
class Daire : public Sekil
{
private:
    double yaricap;

public:
    // Yapıcı metot
    Daire(double _yaricap) : yaricap(_yaricap)
    {
        if (yaricap <= 0)
        {
            cerr << "Hata: Daire yarıçapı pozitif olmalıdır." << endl;
                    yaricap = 1.0;
        }
    }
    // Alan hesaplama metodu
    double alanHesapla() const override
    {
        return M_PI * yaricap * yaricap;
    }
    // Çevre hesaplama metodu (Çap)
    double cevreHesapla() const override
    {
        return 2 * M_PI * yaricap;
    }
    // Şeklin adını döndürme metodu
    string getAd() const override
    {
        return "Daire";
    }
    // Bilgi yazdırma metodu
    void bilgiYazdir() const override
    {
        cout << "Şekil: " << getAd() << endl;
        cout << "Yarıçap: " << yaricap << endl;
        cout << "Alan: " << alanHesapla() << endl;
        cout << "Çevre: " << cevreHesapla() << endl;
    }
};
// Üçgen sınıfı (Şekil›den türetilir.)
class Ucgen : public Sekil
{
private:
    double a; // Birinci kenar
    double b; // İkinci kenar
    double c; // Üçüncü kenar
public:
    // Yapıcı metot
    Ucgen(double _a, double _b, double _c) : a(_a),
                                             b(_b), c(_c)
    {
        if (a <= 0 || b <= 0 || c <= 0 || a + b <= c ||
            a + c <= b || b + c <= a)
        {
            cerr << "Hata: Geçersiz üçgen kenar uzunlukları." << endl;
                    a = 3.0;
            b = 4.0;
            c = 5.0;
        }
    }
    // Alan hesaplama metodu (Heron formülü)
    double alanHesapla() const override
    {
        double s = (a + b + c) / 2.0;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }
    // Çevre hesaplama metodu
    double cevreHesapla() const override
    {
        return a + b + c;
    }
    // Şeklin adını döndürme metodu
    string getAd() const override
    {
        return "Üçgen";
    }
    // Bilgi yazdırma metodu
    void bilgiYazdir() const override
    {
        cout << "Şekil: " << getAd() << endl;
        cout << "Kenar 1: " << a << endl;
        cout << "Kenar 2: " << b << endl;
        cout << "Kenar 3: " << c << endl;
        cout << "Alan: " << alanHesapla() << endl;
        cout << "Çevre: " << cevreHesapla() << endl;
    }
};
int main()
{
    // Şekil nesneleri oluşturma
    Dikdortgen dikdortgen(5.0, 10.0);
    Daire daire(3.5);
    Ucgen ucgen(3.0, 4.0, 5.0);
    // Şekillerin bilgilerini yazdırma
    cout << "--------------------" << endl;
    dikdortgen.bilgiYazdir();
    cout << "--------------------" << endl;
    daire.bilgiYazdir();
    cout << "--------------------" << endl;
    ucgen.bilgiYazdir();
    cout << "--------------------" << endl;
    // Polimorfizm örneği (Temel sınıf  işaretçisi kullanarak türetilmiş nesnelere erişim)
Sekil *sekilPtr;
 sekilPtr = &dikdortgen;
 cout << "Polimorfizm Örneği (Dikdörtgen):" << endl;
 cout << "Şekil Adı: " << sekilPtr->getAd() << endl;
 cout << "Alan: " << sekilPtr->alanHesapla() << endl;
 cout << "Çevre: " << sekilPtr->cevreHesapla() << endl;
 sekilPtr = &daire;
 cout << "Polimorfizm Örneği (Daire):" << endl;
 cout << "Şekil Adı: " << sekilPtr->getAd() << endl;
 cout << "Alan: " << sekilPtr->alanHesapla() << endl;
 cout << "Çevre: " << sekilPtr->cevreHesapla() << endl;
 sekilPtr = &ucgen;
 cout << "Polimorfizm Örneği (Üçgen):" << endl;
 cout << "Şekil Adı: " << sekilPtr->getAd() << endl;
 cout << "Alan: " << sekilPtr->alanHesapla() << endl;
 cout << "Çevre: " << sekilPtr->cevreHesapla() << endl;
 return 0;
}