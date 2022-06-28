// Example program #1 from Chapter 19 of Absolute Beginner's Guide
// to C, 3rd Edition
// File Chapter19ex1.c

#include <stdio.h>
#include <string.h>
#include <ctype.h>

main(){
    int i;
    int hasUpper, hasLower, hasDigit;
    char user[25], password[25];

    hasUpper=hasLower=hasDigit=0;
    printf("What is your username? ");
        scanf(" %s", user);

    printf("Please create a password ");
        scanf(" %s", password);

    for (i=0; i<strlen(password); i++)
    {
        if (isdigit(password[i])) 
        {
            hasDigit=1;
            continue;
        }
        if (isupper(password[i])){
            hasUpper=1;
            continue;
        }
        if (islower(password[i])){
            hasLower=1;
        }
    }

    if((hasDigit) && (hasUpper) && (hasLower)){
        printf("\n\nExcellent work, %s,\n", user);
        printf("Your password has upper and lowercase ");
        printf("letters and a number.");
    } else {
        printf("\n\nYou should consider a new password, %s, \n", user);
        printf("One that uses upper and lowercase letters ");
        printf("and a number.");
    }
    return 0;

}

// Greg, Perry; Miller Dean. C Programming Absolute Beginner's Guide (p. 173). Pearson Education. Kindle Edition. 