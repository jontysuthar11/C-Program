#include<stdio.h>
#include<conio.h>

int main () {
 int a =2;
printf(" %d %d %d",a, ++a, a++);

// it happens because the gcc compiler takes arugment from right to left order;
    return 0;
}