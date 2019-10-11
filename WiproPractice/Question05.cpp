#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
bool arms(int n, int len){
	int sum=0,t=n,r=0;
	while(t!=0){
		r = t % 10;
		sum += pow(r, len);
		t /= 10;
	}
	if (n == sum){
		return true;
	}
	return false;
}
int main(){
	int lb,ub;
	char length[50];
	printf("Enter Lower Bound :- ");
	scanf("%d", &lb);
	printf("Enter Upper Bound :- ");
	scanf("%d", &ub);
	for (int i=lb; i<=ub; i++){
		sprintf(length, "%d", i);
		if (arms(i, strlen(length))){
			printf("%d ", i);
		}
	}
	return 0;
}
