#include<stdio.h>
#include<conio.h>
int main()
{
    // 97-122 =a-z;
    //ASCII VALUES
    char ch;
    printf("Enter the characeter \n");
    scanf("%c",&ch);
    if (ch<=122 && ch>=97){
        printf("it is lowercase");

    }
    else {
        printf(" it is not a lowercase");
    }
    return 0;
}