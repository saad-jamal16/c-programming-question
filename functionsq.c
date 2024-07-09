#include<stdio.h>
double square(double side);  //declaration
int main() {
    double side;
    printf("enter the side of square: ");
    scanf("%lf",&side);

    double square(double side);
    printf("the square of %lf is %lf",side*side); //call
    return 0;

}


double square(double side){
     return side*side;  //defination
}
