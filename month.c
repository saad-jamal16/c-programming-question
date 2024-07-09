#include<stdio.h>
int main(){
    int day,month,num;
    printf("enter a month number(1-12): ");
    scanf("%d", &num);

    if(num == 1){
       printf("month has 31 days");
    }
    else if(num == 2){
       printf("month has 28,29");
    }
    else if(num == 3){
       printf("month has 31 days ");
    }
    else if(num == 4){
       printf("month has 30 days ");
    }
    else if(num == 5){
       printf("month has 31 days ");
    }
    else if(num == 6){
       printf("month has 31 days ");
    }
    else if(num == 7){
       printf("month has 31 days");
    }
    else if(num ==8){
       printf("month has 31 days ");
    }
    else if(num == 9){
       printf("month has 30 days ");
    }
    else if(num == 10){
       printf("month has 31 days ");
    }
    else if(num == 11){
       printf("month has 30 days");
    }
    else if(num == 12){
       printf("month has 31 days ");
    }
    else{
        printf("number entered is incorrect");
    }
    return 0;
}
