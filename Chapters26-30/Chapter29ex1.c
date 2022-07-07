#include <stdio.h>
#include <stdlib.h>
FILE * fptr;

main(){
    char letter;
    int i;

    fptr = fopen("C:\\Users\\User\\Code\\BeginnerGuideExercises\\letters.txt", "w+");
    if (fptr==0){
        printf("There was an error while opening the file.\n");
        exit(1);
    }

    for (letter='A';letter<='Z';letter++){
        fputc(letter,fptr);
    }

    puts("Just wrote the letters A through Z");

    fseek(fptr, -1, SEEK_END);
        printf("Here is the file backwards:\n");
        for (i=26; i>0; i--){
            letter = fgetc(fptr);
            fseek(fptr, -2, SEEK_CUR);
            printf("The next letter is %c.\n", letter);
        }
    fclose(fptr);

    return(0);
}