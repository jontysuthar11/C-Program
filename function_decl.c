#include<stdio.h>
#include<conio.h>

int square (int num);

int main () {

    int x , result;

    x =4;

    result = square(x);

    printf("%d squared is  %d \n ", x,result);

    return 0;
}
 
int square (int num ) {
    int y;

    y = num * num;

    return (y);
}