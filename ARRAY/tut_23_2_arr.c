// here we make a 2 dimension array ;
//  In matrix form

//  2 , 4 matrix we will run
//  first for loop for 2 and second for 4;
#include <stdio.h>

int main()
{

    int marks[2][4] = {{45, 07, 18, 03},
                       {2, 4, 8, 6}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            // printf("The value of %d , %d element of an array is %d\n", i, j, marks[i][j]);

            printf("%d ", marks[i][j]);      
       
        }
        printf("\n");
    };
    return 0;
}