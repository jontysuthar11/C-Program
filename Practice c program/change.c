#include<stdio.h>
#include<conio.h>

void change(int a ){
    a = 77;
}
int main (){
    int b = 745;
    printf("The value of b before change is %d\n",b);
    change (b);
    printf("The value of b after change is %d\n ",b);
    return 0;
}