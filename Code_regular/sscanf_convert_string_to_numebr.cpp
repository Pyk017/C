#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int main(){
	char *ch = "586";
	int x;
	sscanf(ch, "%d", &x);
	printf("%d", x);
	return 0;
}
