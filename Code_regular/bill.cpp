#include<stdio.h>
int main()
{
	int u,rem=0; float t;
	printf("Enter Unit\n");
	scanf("%d",&u);
	if(u<=50)
	{
		t=u*0.50;
	}
	if(u>50 && u<=150)
	{
		rem=u-50;
		t=(50*0.50)+(rem*0.75);
	}
	if(u>=150 && u<250)
	{
		rem=u-100;
		t=(0*0.50)+(100*0.75)+(rem*1.2);
	}
	if(u>=250)
	{
		rem=u-200;
		t=(50*0.50)+(100*0.75)+(100*1.2)+(rem*1.75);
	}
	float r=t*0.20;
	float s=r+t;
	printf("Total Bill :- %f\n",s);
	return 0;
}
