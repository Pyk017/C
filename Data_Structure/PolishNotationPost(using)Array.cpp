#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void create(char[],char[]);
int ISP(char);
int ICP(char);
int main()
{
	char exp[30];
	printf("Enter Expression to be converted in Infix Form to PostFix form :- \n");
	scanf("%s",exp);
	char a[30]={0};
	printf("Your Conversion from Infix form to PostForm is :- \n");
	create(exp,a);
}
void create(char e[],char a[])
{
	int top=-1;
	char w;
	for(int i=0;e[i]!=NULL;i++)
	{
		w=e[i];
		if((w>='A' && w<='Z') || (w>='a' && w<='z'))
		{
			printf(" %c ",w);
		}
		else if(w==';')
	    {
	    	while(top>=0)
	    	{
	    		printf(" %c ",a[top]);
	    		top-=1;
			}
		}
		else if(w==')')
		{
			while(a[top]!='(')
			{
				printf(" %c ",a[top]);
				top-=1;
			}
			top-=1;
		}
		else
		{
			while(ISP(a[top])>=ICP(w))
			{
				printf(" %c ",a[top]);
				top-=1;
			}
			top+=1;
			a[top]=w;
		}
	}
}
int ISP(char p)
{
	if(p=='(')
	{
		return 0;
	}
	else if(p=='^')
	{
		return 3;
	}
	else if(p=='*' || p=='/')
	{
		return 2;
	}
	else if(p=='+' || p=='-')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int ICP(char p)
{
	if(p=='(')
	{
		return 4;
	}
	else if(p=='^')
	{
		return 4;
	}
	else if(p=='*' || p=='/')
	{
		return 2;
	}
	else if(p=='+' || p=='-')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
