#include <stdio.h>

int main()
{
    /*
    Aşağıdaki kodun çıktısının 11 olması için ? ile belirtilen yere hangi şart gelmelidir?
    */
    int toplam = 0;
    for (int i = 1; i <= 5; i++)
    {  
        if(?)
        continue;
        toplam += i;
    }
    printf("%d", toplam);
}