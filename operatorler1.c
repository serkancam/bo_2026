#include <stdio.h>

int main()
{
    //aritmetik operatörler
    /*
    
    +
    -
    *
    /
    %
    
    */
   /*atama operatörleri
   
   sol_taraf=sağ_taraf;
   
   */

   int a,b,c=12,d=10,e=7;
   float f1=15.2,f2=25.2,f3;
   a=5;
   b=18;

   a=f1*b+a;
   a=5;
   //a=5,b=18,c=12,d=10,e=7
    e += a*b/2+d%3*e;//e =e+(a*b/2+d%3*e);
   printf("%d\n",a);
   printf("%d\n",30%8);//
   printf("%d\n",e);

   //karşılaşatırma operatörleri

   /*
   a<b  --> 0,1 -->F,T
   a>b
   a!=b
   a==b
   a<=b
   a>=b
    !a;
   
   */
   //a=5,b=18,c=12,d=10,e=59

   printf("a>b-->%d\n",a>b);
   printf("-->%d\n",a>b+c<d);//a>30<d//5>30<10-->1
   printf("-->%d\n",a != b);
   printf("!a-->%d, !0-->%d,!-10-->%d\n",!a,!0,!-10);

   //33 sayısı a ile b arasında mı

   printf("a<33<b-->%d\n",(a<33) && (b>33));
   
   //mantıksal operatörler
   //ve -->  &&
   //veya --> ||

   int s1,s2;
   //dersten geçmek için iki durmdan biri olmalıdır
   // iki sınav ortalaması 50den büyük olmalı
   // ikinci sınav 70 veya üzerinde olmalıdır.
// (s1+s2)/2 >=50 || s2>=70


//ternary operatör

printf("a>b?100:200-->%d\n",a>b?100:200);


}