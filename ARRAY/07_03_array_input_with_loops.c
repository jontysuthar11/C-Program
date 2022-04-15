#include<stdio.h>
#include<conio.h>

int main () {
 
 int marks[10]; 

 for(int i=0; i<10; i++)
 {
     printf("Enter the value of  student %d :",i+1);
    //  here we did i+1 because we want intialization from 1 ;
     scanf("%d",&marks[i]);

 }
  
 for(int i=0; i<10; i++)
 {
     printf("The value of marks for student %d is : %d\n",i+1,marks[i]);
 }
    return 0;
}