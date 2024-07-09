#include<stdio.h>
void swapNumber(int *x,int *y,int *z);
int main(){
    int first,second,third,swap;
    printf("input the value if 1st number:");
    scanf("%d",first);
    printf("input the value of second element:");
    scanf("%d",second);
    printf("enter the value of 3rd element: ");
    scanf("%d",third);

    printf("the value of swapping are: ");
    printf("element 1= 5\n,elemtn 2= 6\n element3 = 7\n");

    swapNumber(first,second,third);

    printf("the value after swap");
    printf("element 1 =%d\n, element 2= %d\n, element 3=%d\n");
    }

void swapNumber(int*x,int *y,int *z){
    int *tmp;
    *tmp = *y;
    *y = *x;
    *x = *z;
    *z = *tmp;

}


