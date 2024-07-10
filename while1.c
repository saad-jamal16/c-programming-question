#include<stdio.h>
int main(){
    int i,n;
    printf("enter the number upto natural number to be printed: ");
    scanf("%d",&n);

    i=1;
    while(i<=n){
    printf("%d\n",i);
    i++;
    }
    return 0;

}
