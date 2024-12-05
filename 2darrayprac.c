#include <stdio.h>
#define Word_Length 100
void gettwodarray();
int main(){
gettwodarray();

return 0;
}

void gettwodarray(){
int type = 8;
char twodarray[type][2][Word_Length];
printf("Please enter an adjective: ");
twodarray[0][0][0] = 'A';
scanf("%s", twodarray[0][1]);

printf("Please enter an noun: ");
twodarray[1][0][0] = 'N';
scanf("%s", twodarray[1][1]);

printf("Please enter an verb: ");
twodarray[2][0][0] = 'V';
scanf("%s", twodarray[2][1]);

printf("Please enter an verb: ");
twodarray[3][0][0] = 'V';
scanf("%s", twodarray[3][1]);

printf("Please enter an verb: ");
twodarray[4][0][0] = 'V';
scanf("%s", twodarray[4][1]);

printf("Please enter an adjective: ");
twodarray[5][0][0] = 'A';
scanf("%s", twodarray[5][1]);

printf("Please enter an noun: ");
twodarray[6][0][0] = 'N';
scanf("%s", twodarray[6][1]);

printf("Please enter an adjective: ");
twodarray[7][0][0] = 'A';
scanf("%s", twodarray[7][1]);

for(int i = 0; i < type; i++){
	printf("%c %s\n", twodarray[i][0][0], twodarray[i][1]);
}
}

