#include<stdio.h>
#include<string.h>
void mystrcat(char[],char []);
int main()
{
	char a[20],b[20];
	printf("Enter first String :- ");
	gets(a);
	printf("Enter second String :- ");
	gets(b);
	mystrcat(a,b);
	return 0;
}
void mystrcat(char a[],char b[])
{ 
char c[20];
	strcpy(c,a);
	strcpy(&c[strlen(a)],b);
	printf("Your New String is :- ");
	puts(c);
}
