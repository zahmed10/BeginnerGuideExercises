#include <stdio.h>
#include <stdlib.h>

FILE * fptr;

main(){
    fptr = fopen("BookInfo.txt path here",
    "a");

    if (fptr==0){
        printf("Error opening the file! Sorry!\n");
            exit (1);
    }

    fprintf(fptr, "\nMore books to come!\n");

    fclose(fptr);
    return(0);
}