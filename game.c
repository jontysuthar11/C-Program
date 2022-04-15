#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

int main () {
    int number,guess, nguesses=1;
    srand(time(0));
    //srand() The function srand() is used to initialize the generated pseudo random number by rand() function
    number= rand()%100+1;
   // printf("the number is %d\n", number);

do
{
    printf("Guess the number between 1 to 100\n");
    scanf("%d", &guess);
    if(guess>number)
    {
        printf(" Lower number please\n");
    }
    else if (guess<number){
    printf("higher number please\n");
    }

    else{
        printf(" you guessed it in %d attempts \n",nguesses);

    }
    nguesses++;
} while (guess!=number);

    return 0;
}