#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void print(int n){
	printf("\n");
	if (n > 0){
		n--;
		printf("%c",n/26);
		printf("%c",(n%26)+65);
	}
}
int main(){
	char a[50];
	printf("Enter a String :- ");
	gets(a);
	char *c = (char*) malloc(sizeof(char));
	printf("Enter a Character :- ");
	gets(c);
	char *c2 = (char*) malloc(sizeof(char));
	printf("Enter another Character :- ");
	gets(c2);
	strcat(a, c);
	printf(a);
	strcat(c, c2);
	printf(c);
	int n;
	printf("\nEnter a Number :- ");
	scanf("%d",&n);
	print(n);
	return 0;
}
