#include <stdio.h>
void main(){
	int option;
	int percent;
	printf("Do you want to hack NASA? (Press 1) -->");
	scanf("%d",&option);
	
	if(option==1){
	
	percent = 0;
	while(percent <= 100){
		printf("\n Hacking NASA: %d%%",percent);
		percent = percent + 10;
	}
	printf("You have successfully hacked NASA!");
	}else if(option==2){
		printf("Ambot Nimo");
	}else{
		printf("sad life");
	}
	
}
