//Final Project

#include <stdio.h> 


#define MAX_LENGTH 100


void getTypes(FILE *file , char *wordTypes);
void getInput(char *wordTypes , char input[MAX_WORDS][MAX_LENGTH]);




int main(){

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
	
	
	
	
	
	
	
	
	
	
	
	
	
	









