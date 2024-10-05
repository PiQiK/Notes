#include<stdio.h>


int main(){
	char given;
	int num, i;
	
	printf("Enter the character: ");
	scanf("%c", &given);
	printf("Enter the number: ");
	scanf("%d", &num);
	
	for(i = 0; i < num; i++){
		printf("%c", given);
	}
	
	
	return 0;
}
