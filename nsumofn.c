#include<stdio.h>
int main(){
  int sum=0,n,i;
  printf("enter the terms of number: ");
  scanf("%d\n",&n);
  for(int i=1; i<=n; i++){
  printf("The first %d natural number are:",i);
 }
 sum+=i;
 printf("sum of natural number upto %d is %d\n",sum);
return 0;
}
