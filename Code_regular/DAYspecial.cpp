#include<stdio.h>
int main()
{
	int e,da,m,y,d;
	printf("Enter Day number :- \n");
	scanf("%d",&da);
	printf("Enter Month number :-\n");
	scanf("%d",&m);
	printf("Enter Year number :-\n");
	scanf("%d",&y);
	int a=y%100;
	int b=a/4;
	int c=b+m;
	
	switch(m)
	{
		case 1:
			 d=c+1;
			break;
	    case 2:
			d=c+4;
			break;
		case 3:
			 d=c+4;
			break;
		case 4:
			 d=c+0;
			break;
		case 5:
			 d=c+2;
			break;
		case 6:
			 d=c+5;
			break;
		case 7:
			 d=c+0;
			break;
		case 8:
			 d=c+3;
			break;
		case 9:
			 d=c+6;
			break;
		case 10:
			 d=c+1;
			break;
		case 11:
			 d=c+4;
			break;
		case 12:
			 d=c+6;
			break;
	}
	if(y%4==0 && y%100!=0 || y%400==0)
	{
		if(m==1 && m==2)
		{
			d-=1;
		}
	}
	if(y<1700)
	{
		y+=40;
	}
	if(y>2100)
	{
		y-=400;
	}
	if(y>=1700 && y<1800)
	{
		e=d+4;
	}
	if(y>=1800 && y<1900)
	{
		e=d+2;
	}
	if(y>=1900 && y<2000)
	{
		e=d+0;
	}
	if(y>=2000 && y<2100)
	{
		e=d+6;
	}
	int f=e+a;
	int g=f%7;
	
	switch(g)
	{
		case 0:
			printf("Sunday!");
			break;
		case 1:
			printf("Monday!");
			break;
		case 2:
			printf("Tuesday!");
			break;
		case 3:
			printf("Wednesday!");
			break;
		case 4:
			printf("Thursday!");
			break;
		case 5:
			printf("Friday!");
			break;
		case 6:
			printf("Saturday!");
			break;		
	}
	return 0;
}
