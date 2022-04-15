#include<stdio.h>
#include<conio.h>

int main (){
int a = 6;
int *ptr;
ptr= &a;

printf("The address of variable a is %u\n",&a);
printf("the value of variable is %d\n",a);
    return 0;
}