#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct triangle
{
	int a;
	int b;
	int c;
	double ar;
};
typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n)
 {
	int tA=0,tB=0,tC=0; double AR=0.0;
    for(int i=0;i<n;i++)
    {
       int p=(tr[i].a+tr[i].b+tr[i].c)/2;
       tr[i].ar=sqrt(p*(p-tr[i].a)*(p-tr[i].b)*(p-tr[i].c));
    }int j;
    for(int i=1;i<n;i++)
	{
		AR=tr[i].ar;
		tA=tr[i].a;
		tB=tr[i].b;
		tC=tr[i].c;
		j=i-1;
		while(AR<tr[j].ar && j>=0)
		{
			tr[j+1].ar=tr[j].ar;
			tr[j+1].a=tr[j].a;
			tr[j+1].b=tr[j].b;
			tr[j+1].c=tr[j].c;
			j--;
		}
		tr[j+1].ar=AR;
		tr[j+1].a=tA;
		tr[j+1].b=tB;
		tr[j+1].c=tC;
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
