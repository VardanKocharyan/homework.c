#include <stdio.h>

int main(){

	int n = 0;

	do{
		printf("num = ");
		scanf("%d" , &n);
	}while(n < 0);

	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n ; j++){
			if(i == 0 || i == (n-1) || j == 0 || j == (n-1) ){
//			if(i == 0 || j == 0 ||(i = n-1 && j == n-1)){
                        	printf("* ");
			}
			
			else{
				printf("  ");
			}
                }
                printf("\n");
	}


return 0;
}
