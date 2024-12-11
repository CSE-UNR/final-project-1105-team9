#include <stdio.h>
#define Word_Length 100
void gettwodarray(char types[], int typeCount);
int main(){

gettwodarray(types, typeCount);

return 0;
}

void gettwodarray(char types[], int typeCount){
	char twodarray[typeCount][Word_Length];
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
