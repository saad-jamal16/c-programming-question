#include<stdio.h>
int sum(int a, int b); // function declaration

    int main() {
    int a = 5;
    int b = 6;
    int s = sum(a,b);  //function call
    printf("sum is %d",s);
    return 0;

    }



int sum(int a, int b){ // function defination
    int s;
    s= a+b;
    return s;

}
