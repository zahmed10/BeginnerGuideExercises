// Example program #3 from Chapter 31 of Absolute Beginner's Guide
// to C, 3rd Edition
// File Chapter31ex3.c
/* The program demonstrates passing a variable to a function by
address. */
#include <stdio.h>
main()
{
    int i;
    printf("Please enter an integer... ");
    scanf(" %d", &i);
    // Now call the half function, passing the address of i
    half(&i);
    // Shows that the function did alter i's value
    printf("In main(), i is now %d.\n", i);
    return (0); // Ends the program
}
/******************************************************************/
/* Sometimes putting dividers like the one above is a nice break
    between your different functions. */
half(int *i) // Receives the address of i
{
    *i = *i / 2;
    printf("Your value halved is %d.\n", *i);
    return; // Returns to main
}

// Greg, Perry; Miller Dean. C Programming Absolute Beginner's Guide (pp. 298-299). Pearson Education. Kindle Edition.