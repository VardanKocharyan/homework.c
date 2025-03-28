#include <stdio.h>

int main(){

	int x = 0;
	int y = 1;

	int* px = &x;

	printf("before changing is \n");
	printf("x == %d \n" , *px);
	printf("y == %d \n" , *(px + 1));
	
	printf(" \n");
	
	*px = 2;
	*(px + 1) = 3;
	
	printf("after changing is \n");
        printf("x == %d \n" , *px);
        printf("y == %d \n" , *(px + 1));

return 0;
}
