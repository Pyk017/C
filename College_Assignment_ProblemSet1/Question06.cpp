#include<stdio.h>
#include<stdlib.h>
int subSeq(char *str){
	int i=0, acount = 0, bcount = 0, ccount=0;
	
	while(str[i]!='\0'){
		if (str[i] == 'a'){
			acount = 1 + 2*acount;
		}
		else if(str[i] == 'b'){
			bcount = acount + 2*bcount;
		}
		else if(str[i] == 'c'){
			ccount = bcount + 2*ccount;
		};
		i += 1;
	}
	return ccount;
}
int main(){
	char *str = (char*)malloc(50 * sizeof(char));
	printf("Enter a String :- ");
	gets(str);
	printf("Total number of SubSequence are :- %d",subSeq(str));
	return 0;
}
