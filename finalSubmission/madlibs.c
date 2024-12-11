#include <stdio.h>

#define INFILE "madlib1.txt"
#define NLINES 60
#define MAX_LENGTH 100
#define WORD_LENGTH 100
int lineLength(char inword[]);
int numTypeLines(int numReadLines, int maxLen, char inmat[][maxLen]);
int fillStoreReturnLines(int maxLen, char lineStore[][maxLen], FILE* readPTR );
void getLineTypes(int maxLen,char lineStore[][maxLen],char types[], int lineCounter);
void gettwodarray(int maxlength, char types[], int typeCount, char twodarray[][maxlength]);
void getTypes(FILE *fp);
void getInput(char *wordTypes);
//void create(char *madlib , char *wordTypes , char input[MAX_WORDS][MAX_LENGTH]);

int main(){
    FILE* readPTR = fopen(INFILE, "r");

    if(readPTR == NULL){
        printf("File didn't open\n"); 
        return 0;
    }else{
        printf("opened!\n");
    }

    char lineStore[NLINES][MAX_LENGTH];
    int lineCounter = fillStoreReturnLines(MAX_LENGTH, lineStore, readPTR); 
    char types[numTypeLines(lineCounter, MAX_LENGTH, lineStore)];
    getLineTypes(MAX_LENGTH, lineStore, types, lineCounter);
    fclose(readPTR);
    printf("%d", lineLength(types));
    for(int i = 0;i<lineLength(types);i++){
        printf("%c", types[i]);
    }

	//Calling 2darray
	int typeCount;
	char twodarray[NLINES][MAX_LENGTH];
	gettwodarray(MAX_LENGTH, types, lineLength(types), twodarray);

	
	
	FILE *fp = fopen("madlib1.txt" , "r");
	if(fp == NULL){
		printf("NOPE\n");
		return 0;
	}

	
	char ch;
	int counter = 0;
	for(int i=0 ; i < lineCounter ; i++){
		if(lineLength(lineStore[i]) == 2){
               		if(lineStore[i][0] == 'A' | lineStore[i][0] == 'N'| lineStore[i][0] == 'V'){
		       		printf("%s",twodarray[counter]);
				counter++;
               	}
           }else{
			for(int j = 0 ; j < lineLength(lineStore[i]) ; j++){
				printf("%c" , lineStore[i][j]);
				
			}
		}
	}
			
		
		
	{
			
	counter++;
		
	}	
	printf("%c" , ch);

		
	fclose(fp);

	return 0;
}


//make lineStore- assume linestore object is already present so everyone can access it
int fillStoreReturnLines(int maxLen, char lineStore[][maxLen],FILE* readPTR ){
    int lineCounter = 0;
        for(int lineIndex = 0; lineIndex < NLINES; ++lineIndex){
                fgets(lineStore[lineIndex], maxLen, readPTR);
                if(*lineStore[lineIndex] == '\0'){break;}
                    lineCounter++;
        }
        return lineCounter-1;
}

//Get typed lines (NVA etc)
void getLineTypes(int maxLen,char lineStore[][maxLen],char types[], int lineCounter){
    int stepthrough = 0;
        for(int i = 0;i <lineCounter; i++){
            
            if(lineLength(lineStore[i]) == 2){
                if(lineStore[i][0] == 'A' | lineStore[i][0] == 'N'| lineStore[i][0] == 'V'){  
                    types[stepthrough] = lineStore[i][0];
                    stepthrough++;
                }
            }

        }
        types[stepthrough] = '\0';
}
//Get array length (line of madlib)
int lineLength(char inword[]){
    int counter = 0;
        for(counter;inword[counter] != '\0';counter++){;}
    return(counter);
}
//get number of lines of length 2 in madlib
int numTypeLines(int numReadLines, int maxLen, char inmat[][maxLen]){
    int counter = 0;
        for(int i = 0;i < numReadLines; i++){
           if(lineLength(inmat[i]) == 2){
               if(inmat[i][0] == 'A' | inmat[i][0] == 'N'| inmat[i][0] == 'V'){counter++;
               }
           }
        }

    return(counter);
}
//2darray function
void gettwodarray(int maxlength, char types[], int typeCount, char twodarray[][maxlength]){
	for(int i = 0; i < typeCount; i++){
		char wordType = types[i];
		switch(wordType){
			case 'A': 
				printf("Please enter an adjective: ");
				break;
			case 'N':
				printf("Please enter an noun: ");
				break;
			case 'V':
				printf("Please enter an verb: ");
				break;
			default : 
				printf("Swith error");
				break;
		}
		scanf("%s", twodarray[i]);
	}
}




//////////////////////////////////////////////////////////////////////////////////////


