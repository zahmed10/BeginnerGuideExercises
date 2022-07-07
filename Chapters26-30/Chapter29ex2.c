#include <stdio.h>
#include <stdlib.h>
FILE * fptr;

main(){
    char letter;
    int i;

    fptr = fopen("C:\\Users\\User\\Code\\BeginnerGuideExercises\\Chapters26-30\\letters.txt", 
        "r+");

    if (fptr==0){
        printf("There was an error while opening the file.\n");
        exit(1);
    }

    printf("Which # letter would you like to change (1-26? ");
        scanf(" %d", &i);

        fseek(fptr, (i-1), SEEK_SET);

        fputc('*', fptr);

    fseek(fptr, 0, SEEK_SET);
        printf("Here is the file now:\n");
        for (i=0; i<26; i++){
            letter = fgetc(fptr);
            printf("The next letter is %c.\n", letter);
        }

        fclose(fptr);

        return(0);
}