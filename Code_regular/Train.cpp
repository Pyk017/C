#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct train tr
{
	int tno; char ststa[20],tname[20],dest[20];
};
struct time
{
	int hdt,mdt,hat,mat;
};
int main()
{
	struct train *tr;
	struct time *ti;
	int n;
	printf("ENter the number of trains you want to enter in your database :- \n");
	scanf("%d",&n);
	tr=(struct train*)malloc(n*sizeof(struct train));
	ti=(struct time*)malloc(n*sizeof(struct time));
	for(int i=0;i<n;i++)
	{
		printf("Enter Train name :- \n");
		scanf("%s",&(tr+i)->tname);
		printf("Enter Registered number of train :- \n");
		scanf("%d",&(tr+i)->tno);
        printf("Enter Start Station :- \n");
		scanf("%s",&(tr+i)->ststa);
		printf("Enter Destination Station :- \n");
		scanf("%s",&(tr+i)->dest);
		printf("Enter time of Arrival of this train in HH:MM :- \n");
		scanf("%d%d",&(ti+i)->hat,&(ti+i)->mat);
		printf("Enter time of Departure of this train in HH:MM :- \n");
		scanf("%d%d",&(ti+i)->hdt,&(ti+i)->mdt);
	}int c=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if((tr+j)->tno > (tr+(j+1))->tno)
			{
			 c=(tr+j)->tno;
			 (tr+j)->tno = 	(tr+(j+1))->tno;
			 (tr+(j+1))->tno = c;
			}
		}
	}
	for(int i=0;i<n;i++)
{
	printf("Name of Train is :- %s \n Registered Number is :- %d\n (tr+(j+1))->tno\n(tr+(j+1))->tno")
}
	
	
	return 0;
}
