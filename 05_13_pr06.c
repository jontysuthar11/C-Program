#include<stdio.h>
#include<conio.h>
int add(int n);


int main () {
    int number;
    printf("Enter a positive integer :");
    scanf("%d",number);

    printf("sum =%d", add);

    return 0;
}

int add(int n){
    if(n !=0)
    return n + add(n-1);

else
    return n;
}