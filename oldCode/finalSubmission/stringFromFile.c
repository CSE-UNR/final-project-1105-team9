//Author: Hawkeye
//Purpose: read lines from file to get string like VNNVANV etc
#include<stdio.h>
#define INFILE "madlib1.txt"
#define LENGTHMAX 100
#define NLINES 60
int lineLength(char inword[]);
int numTypeLines(int numReadLines, int maxLen, char inmat[][maxLen]);
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
    char types[numTypeLines(lineCounter, LENGTHMAX, lineStore)];
    int stepthrough = 0;
        for(int i = 0;i <lineCounter; i++){
            
            if(lineLength(lineStore[i]) == 2){
                if(lineStore[i][0] == 'A' | lineStore[i][0] == 'N'| lineStore[i][0] == 'V'){  
                    types[stepthrough] = lineStore[i][0];
                    stepthrough++;
                }
            }
        }
    for(int i = 0; i<stepthrough;i++){
        printf("%c", types[i]);
    }
return 0;
}


int lineLength(char inword[]){
    int counter = 0;
        for(counter;inword[counter] != '\0';counter++){;}
    return(counter);
}

int numTypeLines(int numReadLines, int maxLen, char inmat[][maxLen]){
    int counter = 0;
        for(int i = 0;i < numReadLines; i++){
            if(lineLength(inmat[i]) == 2){counter++;}
        }
    return(counter);
}
