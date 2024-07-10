#include<stdio.h>
int main(){
    int side1,side2,side3,sum;
    printf("enter three side of triangle:\n ");
    scanf("%d%d%d",&side1,&side2,&side3);
    if(side1+side2 > side3){
       printf("triangle is valid");
       }
    else if(side2+side3 > side2){
       printf("triangle is not valid");
       }
    else if("side1+side3 > side2"){
       printf("triangle is not valid");
    }
    else{
       printf("triangle is not valid");

    }

    return 0;
    }





