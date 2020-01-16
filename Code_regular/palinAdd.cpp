#include<stdio.h>
int main()
{
	int n;int rev=0,rev2=0,j,r;
	printf("Enter a Number\n");
	scanf("%d",&n);
	while(n!=0)
	{
		 r=n%10;
		 rev=rev*10 + r;
		n/=10;
	}
	printf(" %d",rev);
	int t=n+rev;
	for(int i=1;i<=100000;i++)
	{
		t=j;
		while (j!=0)
		{
			r=j%10;
			rev2=rev2*10 + r;
			j/=10;
			
		}
		if(rev==t)
		{
			printf(" %d",rev);
			break;
		}
	}
	return 0;
}
