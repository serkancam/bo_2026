#include <stdio.h>

int main()
{
    // int a = 360, b = 45, kalan;
    // kalan = a % b;
    // if (kalan == 0)
    //     printf("ebob=%d", b);

    // a = b;
    // b = kalan;
    // kalan = a % b;
   int a = 360, b = 135, kalan=1;
    while(kalan != 0)
    { 
        kalan=a%b;
        a=b;      
        b=kalan;
        
    }
    printf("ebob=%d\n",a);

    int sayi,bolen=2,durum=1;//2........sayi-1
    scanf("%d",&sayi);

    while(bolen<sayi)
    {
        // printf("%d-",bolen);
        if(sayi%bolen==0)
        {
            durum=0;
            break;
        }

        bolen++;

    }
    printf("durum=%d\n",durum);


}