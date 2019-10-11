#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void swap (char *a,char *b)
{
	char temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void permute(char *a,int l, int r)
{
	if(l==r)
	{
		printf("%s\n",a);
	}
	else
	{
		for(int i=l;i<=r;i++)
		{
			swap((a+l),(a+i));
			permute(a,l+1,r);
			swap((a+l),(a+i));
		}
	}
}
int main()
{
	char ch[20];
	printf("Enter a String :- \n");
	scanf("%s",ch);
	printf("The Permutation of Your String is :- \n");
	int n=strlen(ch);
	permute(ch,0,n-1);
	return 0;
}
