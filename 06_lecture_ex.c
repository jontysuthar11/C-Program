#include<stdio.h>
#include<conio.h>

int main () {
 int i = 4;
 int *j;
 j=&i;
 printf("The value of i is %d\n",*j);
 printf("The value of i is %d\n",i);
 printf("The address of i is %u\n",j);
 printf("The address of j is %u\n ",&j);
 printf("Value of j is %d\n",*(&j));
    return 0;
}