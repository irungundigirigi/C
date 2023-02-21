#include <stdio.h>

enum Day {Sun, Mon, Tue, Wed, Thu, Fri, Sat};

int main ()
{
    // enum is a user defined type of named integer identifiers
    // helps make a program more readable
    // Treated as integers.

    enum Day today = Tue;

    printf("%d", today);

    if (today == Sun || today == Sat) 
    {
        printf("\n Its the weeekend.");
    } else 
    {
        printf("\nIts a weekday. ");
    }

    return 0;

}