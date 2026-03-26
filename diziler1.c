#include <stdio.h>

int main()
{
    int dizim1[5]={2};
    int dizim2[] = {3, 4, 5};
    int boyut;
    scanf("%d", &boyut);
    int yaslar[boyut];
    printf("%u\n", sizeof(yaslar) / sizeof(int));

    // dizim1 = 8;
    dizim1[0] = 55;
    printf("dizim1[0]=%d\n",dizim1[0]);
    printf("dizim1[1]=%d\n",dizim1[2]);
    //dizim3
    int d3[10]={[8]=5,[2]=82};
    for (int i = 0; i < 10; i++)
    {
        printf("d3[%d]=%d\n",i,d3[i]);
    }
    printf("**%d**\n",8[d3]);//d3[8]
}