#include <stdio.h>

int main(){

	int num = 0;
	int sum = 0;

	printf("num = ");

	do{
		scanf("%d" , &num);
	}while(num < 0);
	
	for(int i = 1 ; i <= num/2 ; i++){

		if(num % i == 0){
			sum = sum + i;
		}
	}
	
	if(sum == num){
		printf("this is a perfect number");
	}

	else {	printf("this isnt a perfect number"); }
return 0;
}
