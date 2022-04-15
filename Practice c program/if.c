#include<stdio.h>
#include<conio.h>

int main()
{
    int age ;
    printf("Enter the age \n");
    scanf("%d",&age);

    printf("Entered age of yours is %d \n",age);

    if(age>=18)
    {
        printf("you can vote \n");
    }
    else
    printf("you are under 18");
}