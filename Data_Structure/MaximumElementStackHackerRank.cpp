#include<stdio.h>
#include<stdlib.h>
int top=-1;
void create(int[],int);
void pop(int[],int);
void display(int[],int);
void max(int[],int);
int main()
{
	int a[20],n,ch;
	printf("Enter Range :- \n");
	scanf("%d",&n);
	while(1)
	{
		printf("\nEnter CHoice :- \n(1) to enter element in the Stack :- \n(2) to pop the element of the Stack :- \n(3) to print the max. element present in the Stack :- \n(4) to display the element in the Stack :-\n(5) to exit!!\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				create(a,n);
				break;
			case 2:
				pop(a,n);
				break;
			case 3:
				display(a,n);
				break;
			case 4:
				max(a,n);
				break;
			case 5:
				exit(0);
				break;
			default:
				printf("\nInvalid Input!!\n");
				break;
		}
	}
	return 0;
}
void create(int a[],int n)
{
	if(top<(n-1))
	{
		printf("\nEnter Number :- ");
		top+=1;
		scanf("%d",&a[top]);
	}
	else
	{
		printf(" \nStack Overflow!\n");
	}
}
void pop(int a[],int n)
{
	if(top<0)
	{
		printf("\nStack UnderFlow!\n");
	}
	else
	{
		top-=1;
		printf("\nDeletion Successful!!\n");
	}
}
void max(int a[],int n)
{
	int m=a[0];
	for(int i=1;i<n;i++)
	{
		if(a[i]>m)
		{
			m=a[i];
		}
	}
	printf("\n Maximum element in the Stack is :- %d\n",m);
}
void display(int a[],int)
{
	printf("\nElement present in the Stack are :- \n");
	for(int i=0;i<=top;i++)
	{
		printf(" %d",a[i]);
	}
}
