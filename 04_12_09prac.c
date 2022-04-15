#include<stdio.h>
#include<conio.h>

int main () {
    int n , i=1,factorial = 1;
    

    printf("Enter a number to find a factorial \n");
    scanf("%d",&n);
    while (i<=n)
    {
    
    
    factorial*=i;
    i++;}
    printf(" the factorial of %d is :%d",n,factorial);
    
    
    return 0;
}