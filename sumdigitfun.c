#include<stdio.h>
int sumdigit(int n);  //declaration
int main() {
int n;
printf("enter the digit: ");
scanf("%d",&n);
int result = sumdigit(n);          //call
printf("sum of digit is %d\n",result);

}
int sumdigit(int n){
    int sum=0;         // defination
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}
