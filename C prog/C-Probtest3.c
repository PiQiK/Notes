#include <stdio.h>
/*
void binaryflip(int arr[], int sz){
	int start = 0;
	int end = size - 1;
	
	while(start < end){
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
	
}

*/
int main(void){
	
	int num, zero = 0, one = 1, rem;
	/*
	printf("Enter a number -> ");
	
	scanf("%d",&num);
	*/
	num =375;
	printf("The binary number is: ");
	
	while(num > 0){
	rem = num % 2;
	zero = zero + rem * one;
	num /= 2;
	one *= 10;
	
}
	printf("%d",zero);
	
	
	return 0;
}


/*
bin = num % 2;
	bin1 = (bin / 2) % 2;
	bin2 = (bin1 / 2) % 2;
	bin3 = (bin2 / 2) % 2;
	bin4 = (bin3 / 2) % 2;
	bin5 = (bin4 / 2) % 2;
	bin6 = (bin5 / 2) % 2;
	bin7 = (bin6 / 2) % 2;
	*/
