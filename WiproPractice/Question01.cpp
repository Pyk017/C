#include<stdio.h>
#include<stdlib.h>
#include<string.h>
bool check(char str[], int n){
	int i=0, count=0;
	while(str[i] != NULL){
		int a = str[i] - 48;
		if (n % a == 0){
			count += 1;
		}
		i += 1;
	}
	if (count >= 2){
		return true;
	}
	else{
		return false;
	}
}
int main(){
	char str[50];int n;
	printf("Enter a Number :- ");
	scanf("%d",&n);
	sprintf(str, "%d", n);
	if (check(str, n)){
		printf("It is a Correct Number!");
	}
	else{
		printf("It is an incorrect Number!");
	}
	return 0;
}
