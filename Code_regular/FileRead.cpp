#include<stdio.h>
int main()
{
	FILE *f;
	f=fopen("C:\\Documents and Settings\\User.S\\Desktop\\abc.txt","r");
	char ch,ch1;int count=0;
	printf("Content in the File are :- \n");
	while((ch=getc(f))!=EOF)
	{
		count++;
		printf("%c",ch);
	}
	printf("\nNUMbers of characters are :- %d\n",count);
	fclose(f);
	return 0;
}
