#define INFILE "madlib1.txt"
#define NLINES 60
#define MAX_LENGTH 100
#define MAX_WORDS 50
int lineLength(char inword[]);
int numTypeLines(int numReadLines, int maxLen, char inmat[][maxLen]);
void gettwodarray(char types[]);
void getTypes(FILE *file , char *wordTypes);
void getInput(char *wordTypes , char input[MAX_WORDS][MAX_LENGTH]);
void create(char *madlib , char *wordTypes , char input[MAX_WORDS][MAX_LENGTH]);

int main(){






return 0;
}














//////////////////////////////////////////////////////////////////////////////////////
int main(){
    FILE* readPTR = fopen(INFILE, "r");

    if(readPTR == NULL){printf("File didn't open\n"); return 0;}else{printf("opened!\n");}
        int lineCounter = 0;        
        char lineStore[NLINES][MAX_LENGTH];
        for(int lineIndex = 0; lineIndex < NLINES; ++lineIndex){
                fgets(lineStore[lineIndex], 100, readPTR);
                if(*lineStore[lineIndex] == '\0'){break;}
                    lineCounter++;
        }
    fclose(readPTR);
    char types[numTypeLines(lineCounter, MAX_LENGTH, lineStore)];
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


