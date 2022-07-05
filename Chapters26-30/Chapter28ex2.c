#include <stdio.h>
#include <stdlib.h>
FILE * fptr;

main(){
    char fileLine[100];
    fptr = fopen("/Users/zayd/Code/CProgrammingAbsoluteBeginner'sGuide/Chapters26-30/BookInfo.txt",
    "r");

    if (fptr!=0)
    {
        while (!feof(fptr))
        {
            fgets(fileLine, 100, fptr);
            if(!feof(fptr)) {
                puts(fileLine);
            }
        }
    } else {
        printf("\nError opening file.\n");
    }
    fclose(fptr);
    return(0);
}