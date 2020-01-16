#include<stdio.h>
#include<stdlib.h>
int create(char []);
int calci(int,int,char);
int main()
{
	char a[30];
	printf("Enter Expression !\n");
	gets(a);
	printf("The VAlue of the expression is :- %d",create(a));
	return 0;
}
int  create(char a[])
{
	int top=-1;
	int b[10]={0};int op1,op2,op3=0;
	for(int i=0;a[i]!=NULL;i++)
	{
		if(a[i]=='+' || a[i]=='-' || a[i]=='*' || a[i]=='/' || a[i]=='^')
		{
			op1=b[top];
			op2=b[top-1];
			op3=calci(op1,op2,a[i]);
			top+=1;
			b[top]=op3;
		    
		}
		else if(a[i]==';')
		{
			return b[top];
		}
		else
		{
			top+=1;
			b[top]=(int)a[i];
		}
	}
}
int calci(int o1,int o2,char c)
{
	if(c=='+')
	{
		return o2+o1;
	}
	else if(c=='-')
	{
		return o2-o1;
	}
	else if(c=='*')
	{
		return o2*o1;
	}
	else if(c=='/')
	{
		return o2/o1;
	}
	else if(c=='^')
	{
		return o2^o1; 
	}
	else
	{
		return 0;
	}
}
