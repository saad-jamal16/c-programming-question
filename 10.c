#include<stdio.h>
    int main(){
    int first,second,third,maximum,result;

    printf("input the first integer: ");
    scanf("%d",&first);

    printf("input the second integer: ");
    scanf("%d",&second);

    printf("input the third integer: ");
    scanf("%d",&third);

    result=(first+second+abs(first-second))/2;
    maximum=(result+third+abs(result-third))/2;

    printf("maximum value of the three ineteger is:%d\n",maximum);
    return 0;




}
