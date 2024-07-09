#include<stdio.h>
#include<math.h>
int main(){
    int cp,sp,amt;
    printf("enter the cost price: ");
    scanf("%d", &cp);
    printf("enter the selling price: ");
    scanf("%d", &sp);
    amt = (sp - cp);
    if(sp>cp){
       printf("profit is %d",amt);
    }
    else if(cp>sp){
       printf(" loss is %d",amt);
    }
    else{
       printf("no profit no loss");
    }


}
