#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    // in C the ransom function has two inbuilt functions: rand() and srand() function;
    // seed - the seed value determines a particular sequence of random numbers when calling the rand function.
    // if a program uses the same seed value the rand function will get the same sequence of numbers.
    // The srand syntax is void srand(unsigned int seed);

    int num, i; 
    num = 10;
    // Number of numbers we want to print
    time_t seconds;
    
    //stores time in variable seconds
    time(&seconds);

    srand((unsigned) time(&seconds));

    printf("\n");

    for(i=0;i<num;i++)
    {
        printf("%d,", rand() % 50);

    }

    return 0;
    // ends the execution of a function & returns control to the calling function
    // can return a value to the calling function;
}