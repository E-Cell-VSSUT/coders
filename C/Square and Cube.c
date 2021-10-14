#include<stdio.h>
int main(){
    int num;
    int counts = 1 , countc = 1;
    printf("ENTER THE NUMBER UPTO WHICH YOU WANT TO CALCULATE:");
    scanf("%d",&num);
    do
    {
        printf("%d Square = %d \n",counts, counts*counts);
        counts++;
    } while (counts<=num);
    do
    {
        printf("%d Cube = %d \n",countc, countc*countc*countc);
        countc++;
    } while (countc<=num);
    return 0;
}
