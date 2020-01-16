#include<stdio.h>
int main()
{
	int n,m;
	printf("Enter range \n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				m++;
			}
		}
		if(m==2)
		{
			printf(" %d ",i);
		}
		m=0;
	}
	return 0;
}
