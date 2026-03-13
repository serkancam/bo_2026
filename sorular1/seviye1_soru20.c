#include <stdio.h>

int main()
{
    /*/
    Aşağıdaki sonsuz döngünün sadece iki adım çalıştıktan sonra sonlanıp ekrana 4 yazdırması için // BOŞLUK yerine hangisi gelmelidir?
    */
    int i = 1;
    for (;;)
    {
        i *= 2;
        // BOŞLUK
    }
    printf("%d", i);
}