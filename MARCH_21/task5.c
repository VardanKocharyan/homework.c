#include <stdio.h>

int main(){
	int n = 0;
	int result = 1;
	
	do{
		scanf("%d" , &n);
	}while(n <= 0);

for(int i = 1 ; i <= n ; i++){

	result = result * i;

}
		printf("the result of factory is %d" , result);

return 0;
}
