#include<stdio.h>
//function to calculate square of number
int squareOfNumber(int num)
{
    return (num*num);
}
int main()
{
    int number, square;
    printf("Please Enter any integer Value : ");
    scanf("%f", &number);
    square = squareOfNumber(number);
    printf("square of a given number %d is  =  %d", number, square);
    return 0;
}