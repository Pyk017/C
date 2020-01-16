#include<stdio.h>
#include<stdlib.h>
int max(int a[],int n)
{
	int i=1, m=a[i];
	for(int j=i+1;j<=n;j++)
	{
		if(a[j]>m)
		{
			m=a[j];
		}
	}
	return m;
}
void calculate(int n,int f)
{
	int a[n]={0},an=0,o=0,xr=0,p=1,q=1,r=1,A[100]={0},O[100]={0},XR[100]={0};
	for(int i=1;i<=n;i++)
	{
		a[i]=i;
	}
	for(int i=1;i<n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			an=a[i]&a[j];
			o=a[i]|a[j];
			xr=a[i]^a[j];
			if(an<f)
			{
				A[p]=an;
				p++;
			}
			if(o<f)
			{
				O[q]=o;
				q++;
			}
			if(xr<f)
			{
				XR[r]=xr;
				r++;
			}
		}
	}
	printf("%d\n",max(A,p-1));
    printf("%d\n",max(O,q-1));
    printf("%d\n",max(XR,r-1));
}
int main()
{
	int n,f;
	printf("Enter the Value of n :- \n");
	scanf("%d",&n);
	printf("Enter the Value of f :- \n");
	scanf("%d",&f);
	printf("The Calculated values are  :-\n");
	calculate(n,f);
}
