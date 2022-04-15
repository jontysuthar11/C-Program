#include<stdio.h>
#include<conio.h>
int main()

    int age;
    printf(" enter your age\n");
    scanf("%d",&age);
    if(age<=70 && age>=18)
    //logical and k liye && yeh lgayenge becoz & use krenge tho bitwise operator ho jaayega and se yntax error;
    {
        printf("your above 18 and below 70, you can drive");

    }
    else {
    printf("you cannot  drive");
    }
    
    
    return 0; 
}