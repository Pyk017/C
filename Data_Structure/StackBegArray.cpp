#include<stdio.h>
#include<stdlib.h>
void push(int[],int);
void print(int []);
void pop();
 int top=-1;
int main()
{
	int a[10],n,ch;
	printf("Enter size of the Stack:- \n");
	scanf("%d",&n);
	while(1)
	{
		printf("\nEnter choice \nEnter (1) to enter number in the Stack.\nEnter (2) to print the Stack.\nEnter (3) to Delete an element from the Stack.\nEnter (4) to exit.\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
	        printf("Enter contents in the Stack :- \n");
	        push(a,n);
	        break;
	        case 2:
	        	print(a);
	        	break;
	        	case 3:
	        		pop();
	        		break;
	        		case 4:
	        			exit(0);
	        			break;
	        		default:
	        			printf("Invalid Input!");
	        			break;
	}
}
	return 0;
}
void push(int a[],int n)
{
	int val;
	scanf("%d",&val);
	if(top<(n-1))
	{
		top+=1;
		a[top]=val;
	}
	else
	{
		printf("Stack OverFlow!\n");
	}
}
void print(int a[])
{
	printf("Contents in the Stack are :- \n");
	for(int i=0;i<=top;i++)
	{
		printf(" %d",a[i]);
	}
}
void pop()
{
	
	if(top>0)
	{
		printf("Element Deleted!\n");
		top-=1;
	}
	else
	{
		printf("Stack Underflow!\n");
	}
    
}
