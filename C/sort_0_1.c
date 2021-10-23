//program to sort array of 0s and 1s

#include<stdio.h>
int main()
{
  int n,*A,count0=0;
  printf("enter size of the array\n");
  scanf("%d",&n);
  printf("enter the 0s and 1s\n");
  for(int i=0;i<n;i++){             //input the array
    scanf("%d",&A[i]);
    if(A[i]==0)
      count0++;
  }
  for(int i=0;i<n;i++){             //sorting the array
    if(i<count0)
      A[i]=0;
    else
      A[i]=1;
  }
  for(int i=0;i<n;i++){             //printing the resultant array
    printf("%d\t",A[i]);
  }
  return 0;
}
