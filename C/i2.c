#include <stdio.h>
int main()
{
    int num;
    printf("enter the number upto which you want to calculate\n");
    scanf("%d", &num);
    int count = 1;
    do
    {
        printf("%d^2 =%d\t\n", count,  count * count);
        printf("%d ^3=%d\t\n", count,  count * count * count);
        count++;
    } while (count <= num);

    return 0;
}