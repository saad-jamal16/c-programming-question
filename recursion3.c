#include<stdio.h>
int printnum(int n);
int main(){
    int n = 1;
    printnum(n);
    printf("The natural number are: %d\n");
    return 0;
}
int printnum(int n){
   if(n<=50)
   {
     printf("%d\n",n);
     printnum(n+1);
   }
}
