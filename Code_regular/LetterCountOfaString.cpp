#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i=0,b[100]={0};char a[100];
	printf("Enter a String :- \n");
	gets(a);
	while(a[i]!=NULL)
	{
		if((a[i]>='A' && a[i]<='Z') || (a[i]>='a' && a[i]<='z'))
		{
			b[a[i]-'A']++;
		}
		i++;
	}
	for(int i=0;i<52;i++)
	{
		if(b[i]!=0)
		    printf(" %c is occcured %d times.",i+'A',b[i]);
	}
	return 0;
}
