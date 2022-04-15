#include<stdio.h>
#include<conio.h>
int sum( int a , int b);

int main () {
    int a =4, b=7;
    printf("The value of a and b is %d and %d\n ",a,b);
    printf("The value of 4+7 is %d\n",sum(a,b));
   printf(" The value of and b after function call is %d and %d\n",a,b);

     return 0;
}

int sum (int a , int b ){
    int c;
    c=a+b;  // isme values copy krk jaate h;
    b= 3434;  // yeh isliye print  nahi hogi q ki yeh copy value h 
    a= 25342; // or with help of funcn we can not change variable ;
    // without pointer hum nahi kr skh the h; 
    return c;
}