#include<stdio.h>
#include<conio.h>

int main ()
 {
    // the no divisible by 1 and divisible by it's self;
    // disclaimer : this is not a best method to solve this problem;
    int n =4 , prime = 1;
    for (int  i = 2; i < n; i++)
    // agr divisible hoyega tho break krdegaa.
    { if(n%i==0){
        prime = 0;    
        break;
    }
    }
    if(prime==0){
        printf(" this  is  not a prime number");
    }
    else{
        printf("this is prime number");
    }
    
     return 0; }
    
    
    
    
