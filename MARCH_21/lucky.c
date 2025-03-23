#include <stdio.h>

int main(){

	int num = 0;
	int sum = 0;
	int c = 0;
	int a = 0;

	printf("num = ");
	do{
		scanf("%d" , &num);
	}while(num < 0);
	
	int num1 = num;
	int num2 = num;
	while(num1 > 0){
		sum++;
		num1 = num1/10;
	}
	        printf("%d\n " , sum);

	for(int i = 0 ; i < sum ; i++){
				
			a = a + num2%10;

		if((num2 % 10 < 8) && (num2 % 10) % 4 == 0 || (num2 % 10) % 7 == 0){
			
			printf("%d this is lucky number\n" , num2);
			c = c + 1;
		}	
		
		else{	
			printf("%d it isnt lucky number\n" , num2);
			
			c = c - 1;
			}
			
			num2 = num2/10;
	}
		
		if(a == sum*4 || a == sum*7){
			printf("this isnt lucky number");
		}
		else if( c == sum){
			printf("this is lucky number");
		}

		else {	printf("this isnt lucky number"); }
		
return 0;
}
