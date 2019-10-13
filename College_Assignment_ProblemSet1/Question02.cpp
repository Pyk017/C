#include<stdlib.h>
#include<stdio.h>
#include<string.h>
char changeCase(char s){
	if (s >= 'A' && s <= 'Z'){
		s += 32;
	}
	else{
		s -= 32;
	}
	return s;
}
int main(){
	char str[50];
	printf("Enter a String :- ");
	gets(str);
	int i=0;
	str[i] = changeCase(str[i]);
	
	while(str[i] != NULL){
		if (str[i] == ' '){
			str[i-1] = changeCase(str[i-1]);
			str[i+1] = changeCase(str[i+1]);
		}
		i += 1;
	}
	str[i-1] = changeCase(str[i-1]);
	str[i] = '\0';
	printf("Your New String is :- %s",str);
	return 0;
}
