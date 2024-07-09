#include<stdio.h>
int main(){
    int rectangle,length,width;
    printf("enter length of reactangle: ");
    scanf("%d",&length);
    printf("enter width of rectangle: ");
    scanf("%d",&width);
    rectangle = length*width;
    printf("area of rectangle %d",rectangle);
    return 0;

}
