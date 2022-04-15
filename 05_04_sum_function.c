#include<stdio.h>
#include<conio.h>
// sum is a function which takes a and b as input and returns an integer as an output .

int sum ( int a, int b); // function prototype declaration
int main () {
    int c ;
    c = sum (2,10); // function call
    // here 2 and 10 are given so these actual values are arguments
    printf("The value of  c is %d \n",c );

    return 0;
}

int sum ( int a , int b ){
    int c ;
    c = a + b ; // a and b are parameters .
    return c;
}