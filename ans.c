#include<stdio.h>
int main(){
    char ch;
    printf("enter any character: ");
    scanf("%c",&ch);
    if(ch >= 'a' && ch <= 'z'){
       printf("character is alphabet");
    }
    else if(ch >= '0' && ch <= '9'){
       printf("character is digit");
    }
    else{
       printf("character is special");
    }
    return 0;


}
