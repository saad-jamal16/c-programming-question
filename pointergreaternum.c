#include<stdio.h>

int main(){
    int fn,sn,*ptr1,*ptr2;
    printf("enter the first number: ");
    scanf("%d",&fn);
    printf("enter the second number: ");
    scanf("%d",&sn);

    *ptr1=&fn;
    *ptr2=&sn;

    if(*ptr1 > *ptr2){
      printf("%d is the maximum number\n", *ptr1);
    }
    else{
      printf("%d is the maximum number\n", *ptr2);
    }
    return 0;
}
