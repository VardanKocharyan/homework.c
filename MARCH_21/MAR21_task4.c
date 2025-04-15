#include <stdio.h>

int main(){
	int n = 0;
	int sum = 0;
	printf("n = ");
	do{
		scanf("%d" , &n);
	}while(n < 0);

	for(int i = 1 ; i <= n ; i++)
	{
		for(int j = 1 ; j <= i; j++)
		{
			sum++;
			printf(" %d " , sum);
		}
		printf("\n");
	}
return 0;
}
