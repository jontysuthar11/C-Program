#include<stdio.h>
#include<conio.h>
int main()
{
    int age;
    printf("enter the age\n");
    scanf("%d",&age);
    printf(" entered age of yours is %d\n",age);

    if(age>=18)
    {
        printf("you can vote\n");
    }
    return 0;

}