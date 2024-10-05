#include<stdio.h>

long long power(int base, int exponent){
	long long result = 1;
	int k, f;
	for(k = 0; k < exponent; k++){
		result *= base;
	}
	return result;
}

int main(void){
	int num1, num2;
//	long long result = power(num1, num2);
	printf("Enter your base number: ");
	scanf("%d", &num1);
	printf("Enter your exponent number: ");
	scanf("%d", &num2);
	printf("%d", power(num1, num2));
	return 0;
}
