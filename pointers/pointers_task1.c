#include <stdio.h>

int main(){

	int a = 6;
	int *ptr = &a;
	
	printf("%p \n" ,&a);
	printf("%p \n" , ptr);

	printf("%d \n" , *ptr);

return 0;
}
