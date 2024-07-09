#include<stdio.h>
int sumnum(int n);
int main(){
int sum;
int n;

printf("input the last number of the range: ");
scanf("%d",&n);
int sumnum(int n);
sum = sumnum(n);
printf("sum of numbers from 1 to %d is: %d\n",n,sum);
return 0;
}

int sumnum(int n){
    int sum;
    if (n == 1){
       return(1);
    }else{
       return n+sumnum(n-1);
    }
    return(sum);
}
