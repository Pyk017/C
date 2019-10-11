#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char str[50];
	printf("Enter a Number :- ");
	gets(str);
	int i=0;
	while(str[i]!=NULL){
		switch(str[i]){
			case '1':
				printf("One	");
				break;
			case '2':
				printf("Two	");
				break;
			case '3':
				printf("Three	");
				break;
			case '4':
				printf("Four	");
				break;
			case '5':
				printf("Five	");
				break;
			case '6':
				printf("Six	");
				break;
			case '7':
				printf("Seven	");
				break;
			case '8':
				printf("Eight	");
				break;
			case '9':
				printf("Nine	");
				break;
			case '0':
				printf("Zero	");
				break;
			default:
				printf("NaN	");
				break;
		}
		i += 1;
	}
	return 0;
}
