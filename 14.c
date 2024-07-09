#include<stdio.h>
int main()
{
    int years,months,days;
    printf("input of number of days: ");
    scanf("%d",&days);

    years=(years/365);
    months=(years-(days/30));
    days=(years-(months*30));

    printf("%d years\n%d months\n%d days\n",years,months,days);
    return 0;



}
