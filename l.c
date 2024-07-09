#include<stdio.h>
int ilu(int n);

int main(){
    int i,n;
    printf("enter the number of times you want to print name: ");
    scanf("%d",&n);

    ilu(n);
    return 0;
}
int ilu(int n){
   for(int i= 0; i < n; i++){
    printf("SAMRIN JAHAN\n");
   }

}
