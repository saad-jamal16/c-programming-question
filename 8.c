#include<stdio.h>
int main()
{
    double weight,number,witem1,nitem2,average;
    printf("enter the weight of witem1: ");
    scanf("%lf",&nitem1);
    printf("enter the number of nitem1: ");
    scanf("%lf",&nitem1);

    printf("enter the weight of witem2: ");
    scanf("%lf",&nitem2);
    printf("enter the number of nitem2: ");
    scanf("%lf",&nitem2);
    average = ((witem1*nitem1)+(witem2*nitem2))/(nitem1+nitem2);

    printf("average value is %lf",((witem1*nitem1)+(witem2*nitem2))/(nitem1+nitem2));
    return 0;

}
