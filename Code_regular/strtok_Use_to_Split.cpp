#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char st[] = "25 36 58 47";
	char *ch;
	ch = strtok(st, " ");
	while (ch != NULL){
		printf("%s\n", ch);
		ch = strtok(NULL, " ");
	}
	return 0;
}
