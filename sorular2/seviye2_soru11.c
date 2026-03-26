#include <stdio.h>

int main()
{
    char s[] = "A\nB\\C\'D";
    printf("%d", sizeof(s));
}