#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int great (char a[]){
	 int i=0, g=0;
	 while(a[i] != '\0'){
	 	if (a[g] < a[i]){
	 		g = i;
		 }
	 	i += 1;
	 }
	 return  g;
}
int main(){
	char *str = (char*)malloc(50 * sizeof(str));
	printf("Enter Number :- ");
	gets(str);
	int mid = (int)(strlen(str) / 2);
	char a[20], b[20];
	int i=0;
	while (i < mid){
		a[i] = str[i];
		i += 1;
	}
	a[i] = '\0';
	int j=0; 
	while(str[i]!='\0'){
		b[j] = str[i];
		j += 1;
		i += 1;
	}
	b[j] = '\0';
	int max = great(a);
	char temp = a[max];
	a[max] = a[0];
	a[0] = temp;
	char *c = (char*)malloc(20 * sizeof(char));
	strcpy(c, a);
	strrev(c);
	strcat(a, c);
	printf("\nNew largest Palindromatic number is :- %s",a);
	return 0;
}
