#include<stdio.h>
#include<conio.h>
int main()
{
    int i =5;
    
    printf("the value of i++ is %d\n",++i);
    i++;
    // if i +=10; --> increament i by 10
    printf("the value of i is %d\n",i);

    //printf("the value of i++ is %d\n",i++); 
    //printf(" the value of i is %d\n",i);        
/* i++ = first print than increament          --> phele print kre phir increament kre 
++i means first increament than print;        --> phele increament kre phir print kre*/         
    return 0;
}

// +++ operator are not exists 
// += is compound assignment operator.
//just like -=,+=,/=,&%= =>also important.