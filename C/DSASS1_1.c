//Q1. WAP in C to print the elements in both the diagonals in k matrix//

#include<stdio.h>

void main() {
    int k,i,j;
    printf("Enter Dimension: ");
    scanf("%d",&k);
    int Arr[k][k];
    for(i=0;i<k;i++) {
        for(j=0;j<k;j++) {
            Arr[i][j] = rand() % k*k + 2;
        }
    }
    printf("The given Matrix is: \n");
    for(i=0;i<k;i++) {
        for(j=0; j < k; j++) {
            printf("%d  ",Arr[i][j]);
        }
        printf("\n");
    }
    printf("The matrix containing left and right diagonals is: \n");
    for(i=0;i<k;i++) {
        for(j=0;j<k;j++) {
            if(i==j || i+j==k-1 ) {
                printf("%d ",Arr[i][j]);
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }
}