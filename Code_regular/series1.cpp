#include<stdio.h>
int main()
{
	int n,s=0;
    printf("Enter a Number\n ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
    	for(int j=1;j<=i;j++)
    	{
    		s+=j;
		}
	}
    printf("Sum of Series is :- %d",s);
	return 0;
}
