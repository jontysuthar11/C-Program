#include<stdio.h>
#include<conio.h>
int main()
{
    int days,months,extra_days;
    printf("ener the number of days\n");
    scanf("%d",&days);
months = days/30;
 extra_days =days%30;
 printf("the no.of.months  is %d\n, the number of extra_days is %d\n", months, extra_days);
 return 0;
 }