#include<stdio.h>
int main(){
int sum=0;
printf("the first 10 natural number is: \n");
for(int i=1; i<=10; i++){
sum= sum+i;
printf("%d\n",i);
}
printf("\nThe sum of first 10 natural number is %d",sum);
return 0;
}
