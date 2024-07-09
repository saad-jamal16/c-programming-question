#include<stdio.h>
int main(){
    int n,i=1;
    printf("printf all even number till: ");
    scanf("%d",&n);

    printf("all even number from 1 to n is: ",n);

    do{
       if(i%2 == 0){
       printf("%d\n",i);
       }
       i++;
    }
    while( i <= n && i <= 100);
      return 0;

}
