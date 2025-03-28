#include <stdio.h>

int main(){

	int x =  0;
	int* p = NULL;

	if(p == NULL){
		printf("NULL pointer \n");
	}
	p = &x;
	*p = 6;

	printf("%d \n" , *p);

return 0;
}
