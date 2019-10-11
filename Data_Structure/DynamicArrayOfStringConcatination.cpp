#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int n,total=0;
	printf("Enter number of names :- \n");
	scanf("%d",&n);
	printf("Enter Your Names:- \n");
	char* ch[n];char *allstr;
	for(int i=0;i<n;i++)
	{
		*(ch+i)=(char*)malloc(sizeof(char)*50);
		scanf("%s",ch[i]);
		total+=strlen(ch[i]);
}
printf("Your Arrays of String is :- \n");
for(int i=0;i<n;i++)
{
	puts(ch[i]);
}
allstr=(char*)malloc(sizeof(char)*(total+1));
strcpy(allstr,ch[0]);
for(int i=1;i<n;i++)
{
	strcat(allstr,ch[i]);
}
printf("%s",allstr);
	return 0;
}
