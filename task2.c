#include <stdio.h>

int main(){
	int a = 0;
	int b = 0;
	int c = 0;
	printf("Inner boundary of the range\n");
	scanf("%d" , &a);
	printf("Upper boundary of the range\n");
	scanf("%d" , &b);

if (a > b){
	c = a;
	a = b;
	b = c;
}

for(int i = a ; i <= b ; i++  ){

if(i%5  == 0){
	printf("%d " , i );
}
}

return 0; 
}
