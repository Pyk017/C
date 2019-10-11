#include<stdio.h>
#include<stdlib.h>
int top1=-1,top2=-1,top3=-1,top=-1;
int create(int[],int);
int sum(int[],int);
void display(int[],int);
int main()
{
	int n1,n2,n3,a[20],b[20],c[30],s1=0,s2=0,s3=0;
	printf("Enter range of First Stack :- \n");
	scanf("%d",&n1);
	printf("\nEnter range of Second Stack :- \n");
	scanf("%d",&n2);
	printf("\nEnter range of Third Stack :- \n");
	scanf("%d",&n3);
	top1=create(a,n1);
	s1=sum(a,top1);
	display(a,top1);
	top2=create(b,n2);
	s2=sum(b,top2);
	display(b,top2);
	top3=create(c,n3);
	s3=sum(c,top3);
	display(c,top3);
	while(s1!=s2 || s2!=s3 || s1!=s3)
	{
		top1-=1;
		top2-=1;
		top3-=1;
		s1=sum(a,top1);
	    s2=sum(b,top2);
	    s3=sum(c,top3);
	} 
	if(s1)
	{
		printf(" Your Equality is :-  %d \n",s1);
	}
	else
	{
		printf("\nEquality not Found!\n");
	}
	return 0;
}
int create(int d[],int n)
{
	printf("Enter element in the stack!\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&d[i]);
	}
	top=n-1;
	printf(" top is :- %d\n",top);
	return top;
}
int sum(int f[],int top0)
{
	int i=0,s=0;
	while(i<=top0)
	{
		s+=f[i];
		i++;
	}
	return s;
}
void display(int e[],int top)
{
	printf("\nValues at stack are :-\n");
	for(int i=0;i<=top;i++)
	{
		printf(" %d ",e[i]);
	}
}
