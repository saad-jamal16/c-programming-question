#include<stdio.h>
int main(){
    int i,n,num;
    printf("input the number table to be calculated: ");
    scanf("%d",&num);
    for(int i=1; i<=10; i++){
    printf("%d * %d =%d\n",num,i,num*i);
    }
    return 0;


}
