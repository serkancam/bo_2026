#include <stdio.h>

int main()
{
    char s[] = "RADAR";
    int palindromMu = 1;
    for (int i = 0; i < 2; i++)
    {
        if (s[i] != s[/* BOŞLUK */])
            palindromMu = 0;
    }
    if (palindromMu)
        printf("Evet");
    else
        printf("Hayır");
}