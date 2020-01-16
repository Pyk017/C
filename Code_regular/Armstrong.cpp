#include<stdio.h>
int main()
{
	int n,s,r,k,count=0;
	printf("Enter a Number\n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		s=0;
		k=i;
		while(k!=0)
		{
			r=k%10;
			s+=r*r*r;
			k/=10;
		}
		if(s==i)
		{
			count++;
			printf("%d\t",s);
		}
	}
	printf("\nTotal number of Armstrong Numbers are %d",count);
	
return 0;
}

