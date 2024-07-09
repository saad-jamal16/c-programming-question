#include<stdio.h>
int main(){
    int a,b;
    printf("enter number a: ");
    scanf("%d",&a);
    printf("enter number b: ");
    scanf("%d",&b);

    printf("smallest number: %d\n",b>a ? a:b);
    return 0;

}
