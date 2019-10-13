#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int main(){
	char *a = (char*)malloc(50 * sizeof(char));
	printf("Enter a String :- ");
	gets(a);
	char *ch = (char*)malloc(50 * sizeof(char));
	printf("Enter string to be inserted :- ");
	gets(ch);
	int pos;
	printf("Enter index :- ");
	scanf("%d", &pos);
	char *new_str = (char*)malloc(100*sizeof(char));
	int i=0,k=0;
	while (i <= pos){
		new_str[k] = a[i];
		k += 1;
		i += 1;
	}
	int j=0;
	while(ch[j] != NULL){
		new_str[k] = ch[j];
		k += 1;
		j += 1;
	}
	while(a[i] != '\0'){
		new_str[k] = a[i];
		k += 1;
		i += 1;
	}
	printf("New String is :- %s",new_str);
	return 0;
}
