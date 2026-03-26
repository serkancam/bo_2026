#include <stdio.h>

int main()
{
    int a = 12;
    int b = a >> 2;
    int c = a ^ b;
    int cevap = (c & 8) ? (c << 1) : (c >> 1);
    printf("%d", cevap);
}