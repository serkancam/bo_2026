#include <stdio.h>

int main()
{
    char *iller[]={"ankara","izmir","ankara","edirne"};
    for(int i=0;i<sizeof(iller)/sizeof(*iller);i++)
        printf("%d. il = %s\n",i+1,iller[i]);
    return 0;
}