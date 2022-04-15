// #include<stdio.h>
// #include<conio.h>

// int main()
// {
//     int i = 10;
//     int *ptr = &i;

//     printf("the value of ptr is %d\n",ptr);

//     ptr  = ptr-2;

// printf("THe value of ptr is %u\n ", ptr);
//     return 0;

// }

// #include<stdio.h>
// #include<conio.h>

// int main()
// {
//     int marks[4];
//     int*ptr;

//     ptr = &marks[0];

//     for(int i =0 ; i<4; i++){
//         printf("ENter the value of marks for students %d : \n " , i+1);
//         scanf("%d" , ptr);

//         ptr++;
//     }

//     for(int  i = 0 ; i<4 ; i++){
//         printf("The value of marks for student %d is %d\n",i+1,marks[i]);
//     }
//     return 0;
// }

#include <stdio.h>

void printArray(int *ptr, int n){
    for(int i ;i<n ; i++){
        printf("The value of element %d is %d \n",i+1,*(ptr+1));
    }
}

// void printArray(int ptr[], int n)
// {
//     for (int i; i < n; i++)
//     {
//         printf("The value of element %d is %d \n", i + 1, *(ptr + 1));
//     }
// }
int main()
{
    int arr[] = {1, 2, 3211, 54, 4, 258, 95};
    printArray(arr, 7);
    return 0;
}
