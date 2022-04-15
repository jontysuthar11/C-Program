#include<stdio.h>
#include<conio.h>

int square(int num){
    int y;
    y = num * num;
}
int main()
{
    int a , result;
    a = 4;

    result = square(a);
    printf("the square of %d is %d \n",a, result);


    return 0;
}