#include<stdio.h>
#include<stdlib.h>
bool prime(int n){
	for (int i=2; i<(n / 2); i++){
		if (n % 2 == 0){
			return false;
		}
	}
	return true;
}
int main(){
	int n;
	printf("Enter Range :- ");
	scanf("%d", &n);
	printf("Prime Number within your Range are :- \n");
	for (int i=1; i<=n; i++){
		if (prime(i)){
			printf("%d ",i);	
		}
	}
	return 0;
}
