#include<stdio.h>
#include<stdlib.h>

int main(){
   char firstname[50];

   printf("enter the string: ");
   fgets(firstname, sizeof firstname, stdin);
   printf("the string you entered is %s\n",firstname);
}
