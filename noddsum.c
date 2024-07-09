#include<stdio.h>
int main(){
    int i,n,sum;
    printf("input the number of terms: ");
    scanf("%d",&n);

    printf("The old number are: ");
    for(int i=1; i<=n; i++){
    printf("%d\n",2*i-1);
    }
    sum+=2*i-1;
    printf("the sum of odd number is %d\n",n,sum);
    return 0;


}
