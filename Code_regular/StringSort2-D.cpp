#include<stdio.h>
#include<string.h>
int main()
{
	char a[20][30],t[10]={0};int n;
	printf("ENter range :- ");
	scanf("%d",&n);
	printf("ENter Strings :- \n");
	for(int i=0;i<=n;i++)
	{
		gets(a[i]);
	}
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=n-i-1;j++)
		{
			if(strcmpi(a[j],a[j+1])>0)
			{
				strcpy(t,a[j]);
				strcpy(a[j],a[j+1]);
				strcpy(a[j+1],t);
			}
		}
	}
	printf("Sorted Array is :- ");
	for(int i=0;i<=n;i++)
	{
		puts(a[i]);
	}
	return 0;
}
