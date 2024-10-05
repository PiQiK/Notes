#include <stdio.h>
int main(void){
	int a, b, c;
//	a = first number | b = second number
	printf("Write first number -> ");
	scanf("%d",&a);
	printf("Write second number -> ");
	scanf("%d", &b);
	
	c = (a + b) / 2;
//	c = average 
	if (c % 2 == 0){
//		if remainder = 0 the number is even 
		printf("The number is EVEN");
	}
	else{
//		if remainder != 0 the number is odd
		printf("The number is ODD");
		
	}
	
	return 0;
}
