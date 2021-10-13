#include <stdio.h>

int main()
{
    char a;
    printf(" enter the alphabet\n");
    scanf("%c", &a);
    switch (a)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        printf("entered number %c is viowel\n", a);
        break;
    default:
        printf("entered number %c is consonant\n", a);
        break;
    }

    return 0;
}