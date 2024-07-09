#include<stdio.h>

int main(){
    int arr[10];
    int i;

    printf("enter elements of array: ");
    for(i=0; i<10; i++){

        printf("element - %d:",i);
        scanf("%d",&arr[i]);
    }

    printf("elements in array are:");

    for(i=0; i<10; i++){
        printf("%d ",arr[i]);

    }
    printf("\n");
    return 0;
    }


