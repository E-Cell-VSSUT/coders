#include<stdio.h>
#include<math.h>
void main(){
    //ax2 + bx + c=0
    double a,b,c;

    printf("Enter a b c for ax2 + bx +c = 0 :-\n");
    scanf("%lf %lf %lf",&a,&b,&c);

    if (((b*b)-(4*a*c))>=0)
    {
        
    double root1 = (-b+ sqrt((b*b)-(4*a*c)))/(a*2);
    double root2 = (-b- sqrt((b*b)-(4*a*c)))/(a*2);

    
    printf("roots are %lf and %lf",root1,root2);
    }else{

        printf("roots are imaginary");
    }

}