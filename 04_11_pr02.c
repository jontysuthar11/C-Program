//WAP to print multiplication table of 10 in reversed order.

#include<stdio.h>
#include<conio.h>
int main()
{
printf("*** multiplication table of 10****\n");

    for (int i = 10; i ; i--)
    {
        printf("10 *%d =%d\n",i,10*i);
    }
    return 0;
}