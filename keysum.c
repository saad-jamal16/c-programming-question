#include<stdio.h>
int main(){
    int i,num,sum=0;
    float avg;
    printf("enter the number upto 10:" );
    scanf("%d\n",&num);
    for(int i=1; i<=10; i++){
    sum=sum+num;
    printf("The sum of 10 num is %d\n");
    }
    avg=sum/10;
    printf("the avg is %f\n",avg);
    return 0;

}
