#include <stdio.h>

int main(){
	
	int n = 0;
	int a = 0;
	int sum = 0;

	scanf(" %d", &n);

	while(n > 0){
		sum++ ;
}

	for (int i=0; i<sum; ++i){

	a = n%10;
	n = n/10;
		printf("%d", a);
	}

}
