#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int n;
	printf("Enter number of names :- \n");
	scanf("%d",&n);
	char str[n][50], temp[50];
	printf("Enter names :- \n");
	for (int i=0; i<n; i++)
	{
		scanf ("%s",&str[i]);
	}
	for (int i=0; i<(n-1);i++)
	{
		for (int j=i+1; j<n; j++)
		{
			if (strcmp(str[i],str[j])>0)
			{
				strcpy(temp, str[i]);
				strcpy(str[i],str[j]);
				strcpy(str[j], temp);
			}
		}
	}
	printf ("\n In Lexicographical order :- \n");
	for (int i=0; i<n; i++)
	{
		printf ("%s\n",str[i]);
	}
	return 0;
}
