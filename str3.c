#include<stdio.h>
#include<stdlib.h>

void main(){
    char str[100];
    int i=0;

    printf("input the string: ");
    fgets(str, sizeof str, stdin);
    printf("the character of string are: ");

while(str[i]!='\0'){
  printf("%c  ", str[i]);
  i++;
}
printf("\n");
}
