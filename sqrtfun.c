#include<stdio.h>
#include<math.h>
double squareroot(double n);
int main() {
double x,result;
printf("enter the number: ");
scanf("%lf",&x);

result = squareroot(x);
printf("squareroot of number is %lf\n",result);
}


double squareroot(double n){
  return sqrt(n);
}
