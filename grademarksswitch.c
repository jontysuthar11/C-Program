// quick quiz - wAT to find grade of a student given his marks based on belows:

#include<stdio.h>
#include<conio.h>
int main()
{
    char marks;
    printf("enter a marks(0-100):\n");
    scanf("%d",&marks);
    switch ( marks/10)

    {
    case -1:
        printf("Grade : A");
        break;
    
 case -2:
        printf("Grade : B");
        break;

 case -3:
        printf("Grade : C");
        break;

 case -4:
        printf("Grade : D");
        break;

 case -5:
        printf("Grade : E");
        break;

         
    default:printf("Grade : F");
        break;
    }
return 0;
}