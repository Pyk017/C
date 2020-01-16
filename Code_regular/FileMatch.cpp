#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *f1,*f2;char ch,ch1;int count=0;
	f1=fopen("C:\\Documents and Settings\\User.S\\Desktop\\abc.txt","r");
	if(f1==NULL)
	{
		printf("Your File is Empty\n");
	}
	f2=fopen("C:\\Documents and Settings\\User.S\\Desktop\\abc1.txt","r");
	if(f2==NULL)
	{
		printf("Your File is Empty\n");
	}
	ch=fgetc(f1);
	ch1=fgetc(f2);
	while(ch !=EOF &&  ch1 !=EOF)
	{
		if(ch==ch1)
		{
			count++;
		}
		ch=fgetc(f1);
		ch1=fgetc(f2);
}
if(count==0)
{
	printf("Your Files are Different!\n");
}
else
{
	 printf("Your File is similar !\n");
}
fclose(f1);
fclose(f2);
return 0;
}
