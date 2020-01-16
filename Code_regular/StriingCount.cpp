#include<stdio.h>
int main()
{
	char a[20];
	printf("ENter String :- ");
	gets(a); fflush(stdin);
	int i=0,sent=0,word=0,count=0;
	while(a[i]!=NULL)
	{
		if(a[i]=='.' || a[i]=='?' || a[i]=='!')
		{
			sent++;
		}
		if(a[i]==' ')
		{
			word++;
		}
		count++;
		i++;
	}
	printf("Number of Sentences are :- %d\n Number of Characters are :- %d\n Number of Words are :- %d\n",sent,count,word+1);
	return 0;
}
