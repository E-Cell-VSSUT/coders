#include <stdio.h>
int main()
{
    int r, col = 1;

    printf("Enter number of rows: ");
    scanf("%d",&r);

    for(int i=0; i<r; i++)            
    {
        for(int space=1; space <= r-i; space++)  
            printf("  ");

        for(int j=0; j <= i; j++)     
        {
            if (j==0 || i==0)     
                col = 1;
            else
                col = col*(i-j+1)/j;  

            printf("%4d", col);
        }
        printf("\n");
    }

    return 0;
}

    
