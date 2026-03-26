#include <stdio.h>

int main()
{
    char s[] = "tUbItAk";
    for (int i = 0; s[i]; i++)
    {
        switch (s[i])
        {
        case 'U':
        case 'I':
        case 'A':
            s[i] += 32;
        }
    }
    printf("%s", s);
}