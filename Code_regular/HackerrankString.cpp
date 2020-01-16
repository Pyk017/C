#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	printf("ENter range of String \n");
	scanf("%d",&n);
	if(n<=1 || n>=1000)
	{
		printf("Your Inuput is INvalid !");
	}
	else
	{
		char a[n];
		printf("Enter String : -\n");
		scanf("%s",&a);
		int i=0;
		while(a[i]!='\0')
		{
			puts(&a[i]);
			printf("%c",a[i]);
			//if(a[i]==' ')
			//{
			//	printf("\n");	
			//}
			i++;
		}
	}
	return 0;
}
