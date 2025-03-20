#include <stdio.h>

int main(){
	int t = 0;
	int n = 0;
	
	scanf("%d" , &t);
	scanf("%d" , &n);
	
	
	int n1 = n;
	
	for(int i = 0 ; i < t ; i++){
		arr[i] = n1%10 ; 
		n1 = n1/10;
	printf("%d" , arr[i] );
	

}

return 0;
}
