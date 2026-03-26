#include <stdio.h>

int main()
{
    int v = 0;
    switch('*') 
    {
    case '+': v += 5;
    case '-': v -= 2; break;
    case '*': v += 3;
    case '/': v *= 2;
    }
    printf("%d", v);
}