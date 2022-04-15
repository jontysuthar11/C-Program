#include<stdio.h>
#include<conio.h>
int main()
{
    int age;
    int vipPass = 0;
   vipPass = 1;
    printf(" enter the age\n");
    scanf("%d",&age);

    // '=' tho asignment assign kregaa, '==' tho equaility dekhegaa, ! hogaa tho true ko false and false ko true;
   // if(age<=70 && age>=18)
if((age<=70 && age>=18)|| vipPass==1)
    {
        printf("you are above  18 and below 70, you can drive\n");

    }
    else {
    printf("you cannot drive");
    }
    
 return 0; 
}
// logical operator k bina bhi likh skh the hai; if k andr if krk
// if{4
    // if{

    //}
    
// }