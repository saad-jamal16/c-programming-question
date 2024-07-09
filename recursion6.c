#include<stdio.h>
int sumdigit(int n);
int main(){
    int n,sum;
    printf("input any number to find the sum of digit:  ");
    scanf("%d",&n);
    sum = sumdigit(n);
    printf("the sum of digit %d is :  %d",n,sum);
    return 0;
}
int sumdigit(int n){
   if(n == 0){
    return 0;
  }
   return ((n%10)+sumdigit(n/10));

}
