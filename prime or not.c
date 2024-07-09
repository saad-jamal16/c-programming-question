#include<stdio.h>
int main(){
    int num,n,i;
    printf("enter the number: ");
    scanf("%d",&num);
    for(int i=1; i<=n/2; ++i){
        printf("%d\n",i);
    }
    if(n%i ==0){
      printf("%d is not a prime number");
    }
    else{
      printf("%d is prime number");
    }
    return 0;


}
