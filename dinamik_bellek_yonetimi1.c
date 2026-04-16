#include <stdio.h>
#include <stdlib.h>

int main()
{
    char dizi[]="serkan";
    int *ptr=(int *) malloc(5*sizeof(int));//real
    *(ptr)=20;
    *(ptr+1)=40;
    *(ptr+2)=80;
    printf("%d\n",ptr[2]);
    free(ptr);//ram e alanı geri ver.ç
    printf("%d",ptr[2]);
}