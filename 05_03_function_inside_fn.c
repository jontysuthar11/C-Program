#include<stdio.h>
 #include<conio.h>
void goodMorning();
void goodAfternoon();
void goodNight();

int main(){
     goodMorning();
     

    return 0;
}
void goodMorning(){
    printf("Good Morning jonty\n");
    goodAfternoon();
}

void goodAfternoon(){
    printf("Good Afternoon jonty\n");
    goodNight();
}

void goodNight(){
    printf("Good  Night jonty\n");
}