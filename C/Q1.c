#include <stdio.h>
int main()
{
    int row;
    printf("enter row no.  upto which u want to print\n");
    scanf("%d", &row);
    for (size_t i = 0; i <= row; i++)
    {
        char k = 'A';
        for (size_t j = 0; j < i; j++)
        {
            printf("%c", k);
            k++;
        }
       
        printf("\n");
    }
    return 0;
}