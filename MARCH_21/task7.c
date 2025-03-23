#include <stdio.h>

int main(){

	int n = 0;
	int res = 0;
	int RES = 0;
	do{
		printf("print number\n");
		scanf("%d" , &n);
	}while(n < 0);

	int n1 = n;

	while(n > 0){
	res = 10*(n%10 + res);
	n = n/10;

}
        printf("%d \n" , res/10);
	
	int r = res/10;
	
	while(r > 0){
		RES = r%10;
		printf("%d" , RES);	
		
		if(r/10 != 0){
			printf(" , ");
		}

		r = r/10;

	}
return 0;
}
