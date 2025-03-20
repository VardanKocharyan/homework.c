#include <stdio.h>

int main(){
	
	int a = 0;
	int t = 0;
	
printf("inner boundary of the range \n ");
do {
	scanf("%d" , &t);
}while(t < 0);

printf("Upper boundary of the range \n");
do {
        scanf("%d" , &a);
}while(a < 0);


if(a < t){
	printf("The upper boundary of the range cannot be smaller than the lower boundary.");
}

/*	printf("the result of while is \n");
	//while 
while(t <= a){

	printf("%d " , t );
	t++;
}
*/
	//reverce while
/*while(a >= t){
        printf("%d " , a);
	a--;
}
*/
/*	printf("the result of do/while is \n");

	//do/while
do{
	printf("%d " , t);
	t++;

}while(t <= a);
*/
	printf("\n");

	//reverce do/while
/*do{
	printf("%d " , a);
	a--;
}while(a >= t);
*/
	printf("the result of for is \n");

	//for
/*for(int i = t ; i <= a ; i++ ){

printf("%d " , i);

}
*/
	printf("\n");

	//reverce for
/*for(int i = a ; i >= t ; i--){
	printf("%d " , i);
}

*/
return 0;
}
