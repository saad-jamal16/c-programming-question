#include<stdio.h>
int main(){
    char ch;
    printf("enter the character: ");
    scanf("%c",&ch);
    if((ch>='a' && ch<='z')||(ch >= 'A' && ch <= 'z')){
       printf("character is alphabet");
    }
    else{
       printf("character is not alphabet");
    }
   return 0;
}
