#include "myMath.h"
#include <stdio.h>

int main (){
  double funA=0, funB=0, funC=0;
  double x=0;
printf("‫‪Please‬‬ insert a real number : \n");
  scanf("%lf" ,&x);
  funA = sub(add(Exp((int)(x)), Pow(x,3)),2);
  printf ("‫‪The‬‬ value of f(x) =‬ '‫'x^e‬ ‫‪+‬‬ ‫‪x^3‬‬ ‫‪−‬‬ ‫‪2‬‬ at the point %lf is : %0.4f\n" , x , funA);
  
  funB= add(mul(3,x),mul(2,Pow(x,2)));
  printf ("‫‪The‬‬ value of f(x) =‬ '‫'‬ ‫‪‬‬‫‪3x+2x^2‬‬ at the point %lf is : %.4f\n" , x , funB);

  funC= sub(div(mul(4,Pow(x,3)),5),mul(2,x));
  printf ("‫‪The‬‬ value of f(x) =‬ '‫‪(4x^3)/5-2x' at the point %lf is : %.4f\n" , x , funC);


}


