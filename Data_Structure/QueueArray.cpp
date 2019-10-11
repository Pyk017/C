#include<stdio.h>
#include<stdlib.h>
void insert(int[],int);
void display(int[],int);
void dlt(int[],int);
int front=-1,rear=-1;
int main()
{
	int a[20],n,ch;
	printf("Enter size of the Array :- \n");
	scanf("%d",&n);
	while(1)
	{
		printf("\nEnter Choice !\n(1) to insert an element in the Queue\n(2) to display the Queue\n(3) to delete an element from the Queue\n(4) to exit!\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
	            insert(a,n);
	            break;
	        case 2:
                display(a,n);
                break;
            case 3:
                dlt(a,n);
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
void insert(int a[],int n)
{
	int val;
	if(rear==(n-1))
	{
		printf("Queue if Full!");
	}
	else
	{
		printf("\nEnter elements in the Array :- \n");
	    scanf("%d",&val);
		rear+=1;
		a[rear]=val;
	}
}
void display(int a[],int n)
{
	printf("Your Queue is :-");
	if(front!=rear)
	{
	    for(int i=(front+1);i<=rear;i++)
	    {
		    printf(" %d",a[i]);
	    }
    }
    else
    {
    	printf(" Empty now.");
	}
}
void dlt(int a[],int n)
{
	if(front==rear)
	{
		printf("Queue is Empty!\n");
	}
	else
	{
		front+=1;
		printf("\nDeletion SuccessFul!!\n");
	}

}
