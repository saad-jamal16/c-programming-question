#include<stdio.h>

int main()
{
   char ch1= 'X';
   char ch2= 'M';
   char ch3= 'L';

   printf("The reverse of %c%c%c is %c%c%c\n",
          ch1, ch2, ch3,
          ch3, ch2, ch1);
   return 0;
}
