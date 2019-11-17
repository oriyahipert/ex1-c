#include "myMath.h"
#define e  2.7182

double Exp (int x){
    
    double c = e;
     double result=1;
       while (x != 0){
           result*=e;
           x--;
       }
       return result;
    
     return c;
}

double Pow(double x, int y){
double p=1;
int i;
for(i=0; i<y; i++){
    p=p*x;
}
return p;
}


