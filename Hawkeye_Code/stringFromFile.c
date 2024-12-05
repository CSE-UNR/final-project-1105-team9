//Author: Hawkeye
//Purpose: read lines from file to get string like VNNVANV etc
#include<stdio.h>
#define INFILE "madlib1.txt"
#define LENGTHMAX 100
#define NLINES 60
int lineLength(char inword[]);
int main(){
    FILE* readPTR = fopen(INFILE, "r");

    if(readPTR == NULL){printf("File didn't open\n"); return 0;}else{printf("opened!\n");}
        int lineCounter = 0;        
        char lineStore[NLINES][LENGTHMAX];
        for(int lineIndex = 0; lineIndex < NLINES; ++lineIndex){
                fgets(lineStore[lineIndex], 100, readPTR);
                if(*lineStore[lineIndex] == '\0'){break;}
                    lineCounter++;
        }
    fclose(readPTR);
        for(int i = 0;i <lineCounter; i++){
            for(int j = 0; j < (lineLength(lineStore[i])-1);j++){
                printf("%c", lineStore[i][j]);
            }
        }
return 0;
}


int lineLength(char inword[]){
    int counter = 0;
        for(counter;inword[counter] != '\0';counter++){;}
    return(counter);
}

