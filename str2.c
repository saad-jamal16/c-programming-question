#include<stdio.h>
#include<stdlib.h>

void main(){
    char str[100];
    int i=0;

    printf("input the string: ");
    fgets(str, sizeof str, stdin);

while(str[i]!='\0'){
  i++;
}
printf("length of string is: %d\n",i-1);

}
