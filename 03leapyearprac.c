#include<stdio.h>
#include<conio.h>
int main()
{
    int check_year;
    printf("input a year :");
    scanf("%d",&check_year);

    if((check_year % 400)==0)
    printf("%d is a leap year.\n",check_year);

    else if ((check_year % 100)== 0)
    printf("%d is a not   leap year.\n",check_year);

    else if ((check_year % 4)== 0)
    printf("%d is a  leap year. \n ",check_year);
    
    else
    printf(" %d is a not a leap year. \n",check_year);

    return 0;
    

}