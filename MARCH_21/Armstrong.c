#include <stdio.h>

int main(){
	
	int num = 0;
	int sum = 0;
	int c = 0;
	int res = 1;
	int number = 0;

	printf("num = ");	

	do{
		scanf("%d" , &num);
	}while(num < 0);
	
	int num1 = num;		
	int num2 = num;

	while (num1 > 0){
		sum++;
		num1 = num1/10;
	}
		printf("%d\n" , sum);

	for(int i = 0 ; i < sum ; i++){

		if(num % 10 != 0){

			c = num%10;

		}

		num = num/10; 

		for (int j = 0 ; j < sum ; j++){

			res = c*res ;	
			
			printf("res %d \n" , res);
		}
			
                number = number + res;
		res = 1;
                printf(" number %d \n" , number);

	}
	
		
	if(number == num2){
	
		printf("%d is Armstrong number" , number);
	}

	else{	printf("it isnt Armstrong number");	}
	
return 0;
}
