// Example program #2 from Chapter 18 of Absolute Beginner's Guide
// to C, 3rd Edition
// File Chapter18ex2.c
/* This program is nothing more than a simple demonstration of the
getchar() function. */
// getchar() is defined in stdio.h, but string.h is needed for the
// strlen() function
// Example program #2 from Chapter 18 of Absolute Beginner's Guide
// to C, 3rd Edition
// File Chapter18ex2.c
/* This program is nothing more than a simple demonstration of the
getchar() function. */
// getchar() is defined in stdio.h, but string.h is needed for the
// strlen() function

#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    char msg[25];
    printf("Type up to 25 characters and then press Enter...\n");
    for (i = 0; i < 25; i++)
    {
        msg[i] = getchar();
        if (msg[i] == '\n')
        {
            i--;
            break;
        }
    }

    putchar('\n');

    for (; i >= 0; i--)
    {
        putchar(msg[i]);
    }
    putchar('\n');

    return 0;
}

// Greg, Perry; Miller Dean. C Programming Absolute Beginner's Guide (pp. 165-166). Pearson Education. Kindle Edition. 