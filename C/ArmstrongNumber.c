//
//  main.c
//  ArmstrongNumber
//
//  Created by Smruti Ranjan Badatya on 01/05/21.
//

#include <stdio.h>
#include <math.h>

int armstrong(int x){
    int y = x;
    int digit = 0;
    while( x-- ){
        x = x/10;
        digit++;
    }

    int sum = 0;
    for( int i = 0; i< digit; i++){
        sum = sum + pow(y%10,3);
        y = y/10;
    }
    return sum;
}

int main(int argc, const char * argv[]) {
    printf("Enter Your Number to Check if its Armstrong : ");
    int z;
    scanf("%d" , &z);
    
    if( z == armstrong(z)){
        printf("Entered Number is an Armstrong Number \n");
    } else {
        printf("No, its not an Armstrong Number \n");
    }
    return 0;
}
