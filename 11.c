#include<stdio.h>
int main(){
    float average,distance,spent;
    printf("input total distance in km: ");
    scanf("%f",&distance);
    printf("input total fuel spent: ");
    scanf("%f",&spent);

    average= distance/spent;

    printf("average consumption(km/lt)%f\n",distance/spent);
    return 0;

}
