//Program to generate Fibonacci Series for given number n.
#include<stdio.h>
int main(){
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    int s = 0;      //S is the previous number in the series. 
                    /*It starts with 0 beacuse first number is 1 in the series.*/
    printf("The Fibonacci Series : \n ");
    for(int i=1;i<=x;)
    {
        printf("%d \n" , i);
        i = i + s;
        s = i - s;   
    }
    return 0;
}