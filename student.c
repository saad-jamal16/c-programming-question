#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("student.txt","w");
    char name[100];
    int age;
    float cgpa;
    printf("enter name: ");
    scanf("%s",&name);
    printf("enter age: ");
    scanf("%d",&age);
    printf("enter cgpa: ");
    scanf("%f",&cgpa);

    fprintf(fptr, "%s\t",name);
    fprintf(fptr, "%d\t",age);
    fprintf(ftr, "%f\t",cgpa);
    fcase(fptr);
    return 0;


}
