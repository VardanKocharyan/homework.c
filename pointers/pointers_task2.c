#include <stdio.h>

int main(){

	int a = 6;
	int b = 9;
	
	printf("%d \n" , a);
	
	int *ptr = &a;
	*ptr = b;

	printf("%d \n" , a);

return 0;
}
