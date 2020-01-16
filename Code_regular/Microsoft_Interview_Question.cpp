#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char getAscii(int n){
	if (n == 0){
		return ' ';
	}
	return (n + 64);
}
int r=0, d=0;
char *c = (char*)malloc(sizeof(char));
char *c2 = (char*)malloc(sizeof(char));
char
char* ConvertToAlphabet(int n){
	if (n <= 26){
		*c = getAscii(n);
		c[strlen(c) - 2] = NULL;
		return c;
	}
	else{
		r = n % 26;
		d = n / 26;
		if (n % 26 == 0){
			r = 26;
			d -= 1;
		}
		*c = getAscii(d);
		c[strlen(c) - 2] = NULL;
		*c2 = getAscii(r);
		strcat(c, c2);
		c[strlen(c) - 2] = NULL;
		return c;
	}
}
int main(){
	int n;
	printf ("Enter Number :- ");
	scanf("%d",&n);
//	printf("Ascii value is :- %c\n",getAscii(n));
	printf("Ascii value is :- %s",ConvertToAlphabet(n));
	return 0;
}

