#include <stdio.h>

int main(){

	char ch = 'a';
	char *ptr = &ch;
	
	printf("%c" , *ptr);

	ptr ++;

	printf("%c" , *ptr);

return 0;
}
