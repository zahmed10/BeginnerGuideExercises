#include <stdio.h>

main()
{
    int i;

    printf("Please enter an integer... ");
    scanf(" %d", &i);

    half(i);
    printf("In main(), i is still %d.\n", i);

    return (0);
}

/******************************************************************/

/* Sometimes putting dividers like the one above is a nice break
    between your different functions. */
half(int i) // Recieves the value of i
{
    i = i / 2;
    printf("Your value halved is %d.\n", i);
    return; // Returns to main
}

// Greg, Perry; Miller Dean. C Programming Absolute Beginner's Guide (p. 295). Pearson Education. Kindle Edition.