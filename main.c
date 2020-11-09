#include <stdio.h>
#include "myMath.h"
int main()
    {    // f(x) = e^x + x^3 + 2
    double x=0;
    printf("Please insert a real number: ");
    scanf("%lf",&x);
    double a=Exponent((int)x);
    double b=Power(x,3);
    double c=sub(0,2);
    double num=add(a,b);
    double numf=add(num,c);
    printf("The value of f(x)=e^x+x^3-2 at the point %.4lf is: %.4lf\n",x,numf);
    
                   //f(x) = 3X + 2x^2
                   
    double d=mul(x,3);
    double f=Power(x,2);
    double g=mul(f,2);
    double numf2=add(d,g);
    printf("The value of f(x)=3X+2x^2 at the point %.4lf is: %.4lf\n",x,numf2);
    
                   //f(x) = (4x^3)/5 - 2x
                   
    double i=Power(x,3);
    double h=mul(i,4);
    double j=div(h,5);
    double k=mul(x,2);
    double numf3=sub(j,k);
    printf("The value of f(x)=(4x^3)/5-2x at the point %.4lf is: %.4lf \n",x,numf3);
    return 0;
}
