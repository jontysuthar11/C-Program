#include<stdio.h>
#include<conio.h>

int main()
{
    char s[20];
    printf("Enter your name : ");
    scanf("%s",s);   // yaha pr & nahi aayega becoz  iska first element me address rhetha h
    

    printf("YOur name is : %s  ",s);
    return 0;
}