#include <stdio.h>

int main(){

	int n = 0;
	int sum = 0;

	printf("n = ");
	
	do{
		scanf("%d" , &n);
	}while(n < 0);

	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n ; j++){
			
			if(i >= j){
				sum++;
				printf(" %d " , sum);
			}
			
			else{ printf("   ");}
		}
		printf("\n");
	}
	
return 0;
}
