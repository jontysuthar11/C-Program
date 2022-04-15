#include<stdio.h> 
#include<conio.h>
int main ()
{
    int num1,num2,num3,sum=0;
    float avg=0.0;
    printf("enter three numbers");
    scanf("%d%d%d ",&num1,&num2,&num3);
    sum= num1+num2+num3;
    avg=(sum)/3.0;

    printf("sum is %d:",sum);
    printf("average is %f",avg);

}