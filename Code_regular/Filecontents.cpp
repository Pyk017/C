#include<stdio.h>
int main()
{
	FILE *f;char s[50];int roll,id;
	f=fopen("C:\\Documents and Settings\\User.S\\Desktop\\abc.txt","w");
	if(f==NULL)
	{
		printf("File is Empty \n");
	}
	else
	{
		printf("File is ready to be processed\n");
	printf("Enter Your name :- \n");
	gets(s);
	printf("ENter Your ID:-\n");
	scanf("%d",&roll);
	printf("Enter your Roll no.\n");
	scanf("%d",&id);
	fprintf(f,"Name is :- %s\nRoll No.:- %d\nID :- %d\n",s,roll,id);
	printf("Contents are updated in the File\n");
}
	fclose(f);
	return 0;
}

