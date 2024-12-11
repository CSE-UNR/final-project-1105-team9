#include <stdio.h>
#define Word_Length 100
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
