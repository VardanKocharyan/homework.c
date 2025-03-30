#include <stdio.h>

int main(){

	int x = 0;
	int y = 1;

	int* px = &x;
        if(*px == *(px + 1)){
                printf("x == y == %d \n" , *px);
        }
        else{
                *px = *px ^ *(px + 1);
                *(px + 1) = *px ^ *(px + 1);
                *px = *(px + 1) ^ *px;

                printf("x == %d \n" , *px);
                printf("y == %d \n" , *(px + 1));
        }


return 0;
}
