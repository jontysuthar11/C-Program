#include <stdio.h>
#include <conio.h>

int main()
{

    char  str [] = {'J','o','n','t','y','\0'};

    //  aagr above line me hum \0 nahi lgaayege tho loop chl tha hi jaayega or garbage value milegi;

    // char str[] = "Jonty";
    char *ptr = str;

    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;
    }

    return 0;
}