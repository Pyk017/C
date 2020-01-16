#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
struct Time{
	int a_hr;
	int a_min;
	int d_hr;
	int d_min;
};
struct Train{
	int train_no;
	char t_name[20];
	char start_station[20];
	char destination[20];
    struct Time t;
};
 void sort(struct Train *,int);
 void specific(struct Train *,int);
 void range(struct Train *,int);
 int main()
 {
 	int n,ch;
 	printf("Enter Number of train-details you want to enter in your Database!\n");
 	scanf("%d",&n);
 	struct Train *tr,*tr1;
 	tr=(struct Train *)malloc(n*sizeof(struct Train));
 	for(int i=0;i<n;i++)
 	{
 	   	printf("Enter %d Train number :- \n",i+1);
 	   	scanf("%d",&(tr+i)->train_no);
		printf("Enter %d Train name :- \n",i+1);
		scanf("%s",&(tr+i)->t_name);
 	   	printf("Enter %d Train Start Station :- \n",i+1);
		scanf("%s",&(tr+i)->start_station);
 	   	printf("Enter %d Train Destination :- \n",i+1);
		scanf("%s",&(tr+i)->destination);
 	   	printf("Enter %d Train Arrival hour :- \n",i+1);
		scanf("%d",&(tr+i)->t.a_hr);
 	   	printf("Enter %d Train Arrival minute :- \n",i+1);
		scanf("%d",&(tr+i)->t.a_min);
 	   	printf("Enter %d Train Departure hour :- \n",i+1);
		scanf("%d",&(tr+i)->t.d_hr);
 	   	printf("Enter %d Train Departure minute :- \n",i+1);
		scanf("%d",&(tr+i)->t.d_min);
		printf("/*###########################################/*\n");
	}
 	sort(tr,n);
 	specific(tr,n);
 	range(tr,n);
 	printf("Enter Choice to be Entered if You want to Enter more enteries. \nEnter 1 to proceed and 0 to exit!\n");
 	scanf("%d",&ch);
 	switch(ch)
 	{
 		case 1:
 			int m;
 			printf("Enter number of extra enteries you want to enter in your database! \n");
 			scanf("%d",&m);
 			tr1=(struct Train*)realloc(tr,m*sizeof(tr));
 			for(int i=n;i<(m+n);i++)
 	           {
 	   	            printf("Enter %d Train number :- \n",i+1);
 	   	            scanf("%d",&(tr1+i)->train_no);
		            printf("Enter %d Train name :- \n",i+1);
		            scanf("%s",&(tr1+i)->t_name);
 	   	            printf("Enter %d Train Start Station :- \n",i+1);
		            scanf("%s",&(tr1+i)->start_station);
 	   	            printf("Enter %d Train Destination :- \n",i+1);
		            scanf("%s",&(tr1+i)->destination);
 	   	            printf("Enter %d Train Arrival hour :- \n",i+1);
		            scanf("%d",&(tr1+i)->t.a_hr);
 	   	            printf("Enter %d Train Arrival minute :- \n",i+1);
		            scanf("%d",&(tr+i)->t.a_min);
 	   	            printf("Enter %d Train Departure hour :- \n",i+1);
		            scanf("%d",&(tr+i)->t.d_hr);
 	   	            printf("Enter %d Train Departure minute :- \n",i+1);
		            scanf("%d",&(tr+i)->t.d_min);
		            printf("/*###########################################/*\n");
	            }
	        sort(tr1,(m+n));
 	        specific(tr1,(m+n));
 	        range(tr1,(m+n));
 			break;
 			case 2:
 				exit(1);
				break;
			default:
				printf("Unrecon Input!");
				break;
	}
 	return 0;
 }
void sort(struct Train *tt,int n)
{
	struct Train temp;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if((tt+j)->train_no > (tt+(j+1))->train_no)
			{
				temp=*(tt+j);
				*(tt+j)=*(tt+(j+1));
				*(tt+(j+1))=temp;
			}
		}
	}
	for(int i=0;i<n;i++)
 	{
 	   	printf("%d Train number :- %d\n",i+1,(tt+i)->train_no);
 	   	printf("%d Train name :- %s\n",i+1,(tt+i)->t_name);
 	   	printf("%d Train Start Station :- %s\n",i+1,(tt+i)->start_station);
 	   	printf("%d Train Destination :- %s\n",i+1,(tt+i)->destination);
 	   	printf("%d Train Arrival Time is  :- %d:%d\n",i+1,(tt+i)->t.a_hr,(tt+i)->t.a_min);
 	   	printf("%d Train Departure hour :- %d:%d\n",i+1,(tt+i)->t.d_hr,(tt+i)->t.d_min);
	    printf("/*###########################################/*");
	}
}
void specific(struct Train *sp,int n)
{ 
    int h,m;
	printf("Enter Your Desired Time as HH:MM \n");
	scanf("%d%d",&h,&m);
	for(int i=0;i<n;i++)
	{
		if((sp+i)->t.a_hr == h)
		{
		    printf("%d Train number :- %d\n",i+1,(sp+i)->train_no);
 	   	    printf("%d Train name :- %s\n",i+1,(sp+i)->t_name);
 	   	    printf("%d Train Start Station :- %s\n",i+1,(sp+i)->start_station);
 	   	    printf("%d Train Destination :- %s\n",i+1,(sp+i)->destination);
 	   	    printf("%d Train Departure Time is  :- %d:%d\n",i+1,(sp+i)->t.d_hr,(sp+i)->t.d_min);	
		    printf("/*###########################################/*");
		}
	}
}
void range(struct Train *ra,int n)
{
	char ststa[30],dest[30];
	printf("Enter your desired Arrival station :- \n");
	scanf("%s",&ststa);
	printf("Enter your desired Departure station :- \n");
	scanf("%s",&dest);
	for(int i=0;i<n;i++)
	{
		if(strcmpi((ra+i)->start_station,ststa)==0  || strcmpi((ra+i)->destination,dest)==0)
		{
		    printf("%d Train number :- %d\n",i+1,(ra+i)->train_no);
 	   	    printf("%d Train name :- %s\n",i+1,(ra+i)->t_name);
 	   	    printf("%d Train Start Station :- %s\n",i+1,(ra+i)->start_station);
 	   	    printf("%d Train Destination :- %s\n",i+1,(ra+i)->destination);
 	   	    printf("%d Train Arrival Time is  :- %d:%d\n",i+1,(ra+i)->t.a_hr,(ra+i)->t.a_min);
 	   	    printf("%d Train Departure hour :- %d:%d\n",i+1,(ra+i)->t.d_hr,(ra+i)->t.d_min);
	        printf("/*###########################################/*");	
		}
	}
}
