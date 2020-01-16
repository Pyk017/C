#include<stdio.h>
#include<string.h>
int main()
{
	int n;char a[20],b[20]={0};
	printf("ENter String :- ");
	gets(a);
	strcpy(b,a);
	strrev(b);
	if(strcmpi(b,a)==0)
	{
		printf("Your String is palindrome.\n");
	}
	else
	{
		printf("Your String is not Palindrome.\n");
	}
	return 0;
}
