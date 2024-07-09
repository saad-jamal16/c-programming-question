#include<stdio.h>
int main(){
    float temp,celsius,fahrenheit;
    printf("enter celsius temperature: ");
    scanf("%f",&celsius);
    fahrenheit = (1.8*celsius)+32;
    printf("temperature is %f: ",fahrenheit);
    return 0;

}
