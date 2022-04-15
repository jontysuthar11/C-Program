#include<stdio.h>
#include<conio.h>

// hint :
// fib(n) = fib(n-1)+ fib(n-2)
//fib(1)= 0
// fib(2)=1

int fib( int n);

int main () {
    int n;
    int result ;

    printf("Enter the nth number in fibonacci series :");
    scanf("%d",&n);
     
     if(n<0){

    printf("Fibonacci of negative number is not possible\n");
     }

     else{
         result =fib(n);
         printf("The %d number in fibonacci series is %d\n",n,result);
     }

    return 0;
}
int fib(int n){
    if(n==1)
    return 0;

    else if(n==2){
        return 1;
    }
    else
    {
        return(fib(n - 1)+ fib(n-2));
    }
}   