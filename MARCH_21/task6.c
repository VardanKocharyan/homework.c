#include <stdio.h>

int main(){

	int n = 0;
	int sum = 0;
	int res = 0;
	int c = 0;

printf("the number is \n");
do{
	scanf("%d" , &n);

}while(n < 0);

int n1 = n;

while(n1 > 0){
	n1 = n1 / 10;
	sum++;
}

for(int i = 0; i < sum ;i++){

        res = 10*(n%10 + res);
	n = n/10;

	
}

printf("the number is %d" , res/10);

return 0;
}
