#include<stdio.h>
#include<stdlib.h>
int manu(int[][3],int,int);
int main()
{
	int n,m;
	printf("Enter range :- \n");
	scanf("%d",&n);
	printf("Enter queries :- \n");
	scanf("%d",&m);
	int q[m][3];
	printf("Enter Queries :- \n");
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<3;j++)
		{
			scanf("%d",&q[i][j]);
		}
	}
    int result = manu(q, m, n);
    printf("%d",result);
	return 0;
}
int manu(int q[][3], int m, int n)
{
	int b[n];
	for(int k=0;k<n;k++)
	{
		b[k] = 0;
	}
	for(int j=0;j<m;j++)
	{
	    for(int i = (q[j][0]-1); i <= (q[j][1] - 1) ; i++)
	    {
            b[i] += q[j][2];
        }
	}
	int max = b[0];
	for(int l=1;l<n;l++)
	{
		if(max<b[l])
		{
			max = b[l];
		}
	}
	return max;
}
