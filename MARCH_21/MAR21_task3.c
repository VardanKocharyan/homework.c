#include <stdio.h>

int main(){

	int n = 0;
	
	printf("n = ");

	do{
		scanf("%d" , &n);
	}while(n <= 0);

	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= n ; j++){
			if(i >= j){
				printf("%d" , i);
			}

			else{ printf(" "); }
		}
		printf("\n");
	}
		
return 0;
}
