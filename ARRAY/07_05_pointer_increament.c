#include<stdio.h>
#include<conio.h>

int main () {
// int i = 10;
// int *ptr = &i;

// printf("The value of ptr is %d\n",&i);
// // ptr ++ = ptr+1; 
// ptr++;
// ptr++;
// ptr++;  // jitne ++ utna program me address ka address  me increament aayegaa;
// printf("The value of ptr is %d\n",ptr);

float f= 10;
float *ptr = &f;

printf("The value of ptr is %u\n", ptr);

ptr = ptr-3;

printf("The value of ptr is %u\n",ptr);
    return 0;
}