#include<stdio.h>
int main()
{
	FILE *f;char s[50];
	f=fopen("C:\\Documents and Settings\\User.S\\Desktop\\abc.txt","r");
	printf("Enter contents in the File :- \n");
	gets(s);
	fscanf(f,"%s",s);
	fprintf(f,"%s",s);
	int r=fclose(f);
	printf("%d",r);
	return 0;
}
