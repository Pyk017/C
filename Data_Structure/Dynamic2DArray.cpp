#include<stdio.h>
#include<stdlib.h>
int main()
{
	int r,c,**a;
	scanf("%d %d",&r,&c);
	a=(int**)malloc(sizeof(int)*r);
	for(int i=0;i<c;i++)
	{
		*(a+i)=(int*)malloc(sizeof(int)*c);
    }
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			scanf("%d",(*(a+i)+j));
}
}
    printf("My arrays is :- \n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("%d ",*(*(a+i)+j));
}
printf("\n");
}
	return 0;
}
