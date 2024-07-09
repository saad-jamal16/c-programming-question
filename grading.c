#include<stdio.h>
#include<math.h>
int main(){
    int physics,chemistry,maths,biology,computer,percentage,grade,marks;
    printf("enter your marks in physics,chemistry,maths,biology,computer: ");
    scanf("%d%d%d%d%d",&physics,&chemistry,&maths,&biology,&computer);

    percentage = (physics+chemistry+maths+biology+computer)%500*100;

    if(percentage >= 90){
       printf("GRADE A",percentage);
    }
    else if(percentage >= 80){
       printf("GRADE B",percentage);
    }
    else if(percentage >= 70){
       printf("GRADE C",percentage);
    }
    else if(percentage >= 60){
       printf("GRADE D",percentage);
    }
    else if(percentage >= 40){
       printf("GRADE E",percentage);
    }
    else if(percentage < 40){
       printf("FAIL",percentage);
    }
    return 0;

}
