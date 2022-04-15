#include<stdio.h>
#include<conio.h>

int main () {
    // factorial ki initial value 1 rkhni hogi

    int i=0, n=5, factorial =1;

    for ( i = 1; i <=n; i++)
    {
        factorial*=i;
    }

    printf("the value of factorial %d is %d ",n,factorial);
    return 0;
}