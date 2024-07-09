#include<stdio.h>
int main(){
    int a,b,sum,difference,product,quotient;
    printf("enter number a: ");
    scanf("%d",&a);
    printf("enter number b: ");
    scanf("%d",&b);

    //sum of two integer
    sum= a+b;
    printf("sum is : %d\n",sum);

    //difference
    difference = a-b;
    printf("difference is : %d\n",difference);

    //product
    product= a*b;
    printf("product is :%d\n",product);

    //quotient
    quotient= a/b;
    printf("quotient is : %d\n",quotient);
    return 0;

}
