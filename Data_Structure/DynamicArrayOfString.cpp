#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	printf("Enter number of names :- \n");
	scanf("%d",&n);
	printf("Enter Your Names:- \n");
	char* ch[n];
	for(int i=0;i<n;i++)
	{
		*(ch+i)=(char*)malloc(sizeof(char)*50);
		scanf("%s",ch[i]);
}
printf("Your Arrays of String is :- \n");
for(int i=0;i<n;i++)
{
	puts(ch[i]);
}
	return 0;
}
