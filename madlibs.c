//Final Project

#include <stdio.h> 


#define MAX_LENGTH 100


void getTypes(FILE *fp);
void getInput(char *wordTypes);




int main(){

	char twodarray[10][50];
	
	
	FILE *fp = fopen("madlib1.txt" , "r");
	if(fp == NULL){
		printf("NOPE\n");
		return 0;
	}

	
	char ch;
	int counter = 0;
	
	while(fscanf(fp , "%c" , &ch) == 1){
		if(ch == '\n'){
		
	printf("%s" , twodarray[counter]);
	
	counter++;
}
		
	printf("%c" , ch);
}
		
	//void getTypes(FILE *fp , char *wordTypesArray);
	fclose(fp);

	return 0;
}

	
	
	
	
	
	
	
	
	
	
	









