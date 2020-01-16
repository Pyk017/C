#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *f1,*f2;int b=0;
	f1=fopen("C:\\Documents and Settings\\User.S\\Desktop\\abc.txt","r");
	if(f1==NULL)
	{
		printf("Your File is Empty\n");
	}
	else
	{
		f2=fopen("C:\\Documents and Settings\\User.S\\Desktop\\abc1.txt","w");
		char ch=fgetc(f1);
		while(ch !=EOF)
		{
	        putc(ch,f2);
	        ch=fgetc(f1);
		}
	}
	printf("Your File is Copied !");
	
	fclose(f1);
	fclose(f2);
	return 0;
}
