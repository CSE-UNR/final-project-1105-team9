#include <stdio.h>

#define INFILE "madlib1.txt"
#define NLINES 60
#define MAX_LENGTH 100
int lineLength(char inword[]);
int numTypeLines(int numReadLines, int maxLen, char inmat[][maxLen]);
int fillStoreReturnLines(int maxLen, char lineStore[][maxLen], FILE* readPTR );
void getLineTypes(int maxLen,char lineStore[][maxLen],char types[], int lineCounter);
void gettwodarray(char types[]);
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


	FILE *fp = fopen("madlib1.txt" , "r");
	if(fp == NULL){
		printf("NOPE\n");
		return 0;
	}

	
	char ch;
	
	while(fscanf(fp , "%c" , &ch) == 1){
		if(ch == '\n'){
			break;
		}
		
	printf("%c" , ch);
}
		
	//void getTypes(FILE *fp , char *wordTypesArray);
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












//////////////////////////////////////////////////////////////////////////////////////


    
void gettwodarray();
int main(){
gettwodarray();

return 0;
}

void gettwodarray(){
	int type = 5;
	char twodarray[type][Word_Length];
	char inputArray[5] = {'A','V','A','N','V'};
	for(int i = 0; i < type; i++){
		char wordType = inputArray[i];
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






//int main();

void getWord(FILE *file , char *wordTypes){
	int i = 0;
	char ch;


	while(fscanf(file , "%c" , &ch) == 1){
		if(ch == '\n'){
			break;
		}else if(ch != ','){
			wordTypes[i++] = ch;
		}
	}
		wordTypes[i] = '\0';
}

void getInput(char *wordTypes , char input[MAX_WORDS][MAX_LENGTH]){
	int i = 0;
	while(wordTypes[i] != '\0'){
		if(wordTypes[i] == 'N'){
			printf("Enter a noun: ");
		}else if(wordTypes[i] == 'A'){
			printf("Enter an adjective: ");
		}else if(wordTypes[i] == 'V');{
			printf("Enter a verb: ");
		}
		scanf("%s" , input[i]);
		i++;
	}
}

void create(char *madlib , char *wordTypes , char input[MAX_WORDS][MAX_LENGTH]){
	int i = 0;
	int j = 0;
	char filledMadlib[MAX_LENGTH * 2] = " ";
	int filledIndex = 0;
	
	
	while(madlib[i] != '\0'){
		if(madlib[i] == 'A' || madlib[i] == 'N' || madlib[i] == 'V'){
		while(wordTypes[j] != '\0' && wordTypes[j] != madlib[i]){
		j++;
	}
	int k = 0;
	while(input[j][k] != '\0'){
		filledMadlib[filledIndex++] = input[j][k++];
		}
	}else{
		filledMadlib[filledIndex++] = madlib[i];
	}
		i++;
}

	//filledMadlib[filledIndex] = '\0';
	//printf("   ?    ");

}


int main(){

	char wordTypesArray;

	FILE *file = fopen("madlib.1.txt" , "r");
		if(file == NULL){
			printf("NOPE!\n");
		return 0;
		}
		
		//char wordTypesArray[MAX_LENGTH];
		char getInput[MAX_WORDS][MAX_LENGTH];
		
	void getTypes(FILE *file , char *wordTypesArray);
	fclose(file);

	return 0;
}


