//WAP to print multiplication table of a given number n.

#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    
    printf(" enter the value of n\n");
    scanf("%d",&n);

for (int  i; i<10; i++)
{
    printf("the multiplication table of n is %d\n",i++);
}
return 0;
}