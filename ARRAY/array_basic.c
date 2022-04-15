#include<stdio.h>
#include<conio.h>


// array is capable of storing multiple value of sametype;
int main () {
//  naive way to create 4 ints

// int marks1, marks2, marks3, marks4;
// marks1 = 34;
// marks2 = 45;
// marks3= 67;
// marks4 = 87;

//when we use array;

int marks[4];
marks[0] = 34;
marks[1] = 45;
marks[2] = 34;
marks[3] = 67;
 printf("the marks are %d %d %d and %d : ", marks[0], marks[1],marks[2],marks[3]);




    return 0;
}