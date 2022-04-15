#include<stdio.h>
#include<string.h> // by adding this we can find the length this is header file;

int main(){
    char * st = "Jonty";
    int a = strlen(st);
//     printf("the length of string is %d",a);
    while(*st==a){
        printf("%d",st);
    }
}
