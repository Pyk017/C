#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int add(int i,int j,int n,int l)
{
	int z=l/2;
    for(int k=0;k<z;k++)
    {
        if(i==k || j==k || i==(l-(k+1)) || j==(l-(k+1)))
        {
            return n-k;
        }
    }
}

int main()
{

    int n;
    scanf("%d", &n);
    int l=((2*n)- 1);
    for(int i=0;i<l;i++)
    {
        for(int j=0;j<l;j++)
        {
        	if(i==j && i==(l/2) && j==(l/2))
        	{
        		printf("1  ");
			}
			else
			{
				printf("%d  ",add(i,j,n,l));
			}
        }
        printf("\n\n");
    }
    return 0;
}
