#include<stdio.h>
int main(){
    int num1,num2;
    printf("enter num1 :  \n");
    scanf("%d",&num1);
    printf("enter num2 : \n");
    scanf("%d",&num2);
    if(num1 > num2){
        printf("maximum number is %d",num1);
    } else{
        printf("maximum number is %d",num2);
    }
     return 0;
}
