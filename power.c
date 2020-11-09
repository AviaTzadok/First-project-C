#include <stdio.h>
#include "myMath.h"
#define e 2.71828182846
double Power(double x , int y){
     if(y==0){
        return 1;
     }
    double d=x;
     if(y>0){
    while(y>1){
        d=d*x;
        y--;
    }
     }
     else{
         d=d/x;
         while(y<0){
         d=d/x;
         y++;
         }  
     }
    return d;
    }
    double Exponent(int x){
    double base= Power(e,x);
    
   return base;
    }
