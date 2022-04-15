#include<stdio.h>
#include<conio.h>
#include<stdio.h>
#include<time.h>
 
 // <stdlib> jb random number generate krna ho;
 // <time.h>  time second me program ko run krtha h;
int main () {
    int  number;
    srand(time (0));
    number = rand()%100 + 1; // generate a random number between 1 and 100;
    printf("the number is %d", number);
    return 0;
}