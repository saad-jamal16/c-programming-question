#include<stdio.h>
 void main(){
     int a[100];
     int i,n,sum=0;

     printf("enter the number of element to be stored in the array: ");
     scanf("%d",&n);
     printf("elements in array are\n: ",n);

     for(i=0; i<n; i++){
     printf("elements - %d ->" ,i);
     scanf("%d",&a[i]);
     }

     for(i=0;i<n;i++){
      sum+= a[i];
     }
     printf("the sum of array is %d\n",sum);


 }
