#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char str[50], vowel[50], consonant[50], numbers[50];
	printf("Enter a String :- ");
	gets(str);
	int i=0, j=0, k=0, l=0;
	while(str[i]!=NULL){
		if (str[i] != ' '){
			if ( str[i] == 'a' || str[i] == 'o' || str[i] == 'e' || str[i] == 'i' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
			vowel[j] = str[i];
			j += 1;
		}
		else if (str[i] >= '0' && str[i] <= '9'){
			numbers[k] = str[i];
			k += 1;
		}
		else{
			consonant[l] = str[i];
			l += 1;
		}
	}
		i += 1;
}
vowel[j] = '\0';
consonant[k] = '\0';
numbers[l] = '\0'; 
	printf("Vowels are :- %s\n",vowel);
	printf("Consonants are :- %s\n",consonant);
	printf("Numbers are :- %s\n",numbers);
	return 0;
}
