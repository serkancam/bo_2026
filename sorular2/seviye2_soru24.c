#include <stdio.h>

int main()
{
    int t[2][2] = {{1, 2}, {3, 4}};
    t[0][1] += *t[1];
    *(t[1] + 1) -= t[0][0];
    printf("%d %d", t[0][1], t[1][1]);
}