#include<stdio.h>

char ch ='A';

int main(){
    FILE*fptr;
    fptr=fopen("test.txt","w");

    fprintf(fptr,"%c",'m');
    fprintf(fptr, "%c",'a');
    fprintf(fptr,"%c",'n');
    fprintf(fptr,"%c",'g');
    fprintf(fptr,"%c",'o');
    fclose(fptr);
    return 0;

}
