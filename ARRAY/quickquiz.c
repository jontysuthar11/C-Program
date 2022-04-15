#include<stdio.h>
#include<conio.h>

int main () {
   int  i = 10;
   int *ptr = &i;
    
//    printf ("The value of ptr is %u \n",ptr);
//     ptr ++;
//     printf ("The value of ptr is %u ", ptr);

     printf ("The value of ptr is %u \n",ptr);
    ptr --;
    printf ("The value of ptr is %u ", ptr);
    return 0;
}