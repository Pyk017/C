#include<stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void swap(triangle* a,triangle* b)
{
    triangle temp=*a;
    *a=*b;
    *b=temp;
}
float ar(triangle tr)
{
    float p=(tr.a+tr.b+tr.c)/2;
    float area=sqrt(p*(p-tr.a)*(p-tr.b)*(p-tr.c));
    return area;
}
void sort_by_area(triangle* tr, int n)
 {
     for(int i=0;i<n;i++)
     {
         int s=0;
         for(int j=0;j<(n-i-1);j++)
         {
             if(ar(tr[j])>ar(tr[j+1]))
             {
                 swap(&tr[j],&tr[j+1]);
                 s=1;
             }
         }
         if(s==0)
         {
             break;
         }
     }
}
int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = (triangle*)malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}
