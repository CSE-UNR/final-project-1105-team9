//Final Project



#include <stdio.h> 

#define MAX_LENGTH 100
#define MAX_WORDS 50

void getTypes(FILE *file , char *wordTypes);
void getInput(char *wordTypes , char input[MAX_WORDS][MAX_LENGTH]);
void create(char *madlib , char *wordTypes , char input[MAX_WORDS][MAX_LENGTH]);
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


//15 and 82










