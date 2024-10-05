#include <stdio.h>
void main(){
	int option;
	int timer;
	printf("Launch rocket? (Press 1) ->");
	scanf("%d", &option);
	
	if(option==1){
		
		timer = 0;
		while(timer <=10){
			printf("\n TIME UNTIL LAUNCH: %d%%", timer);
			timer = timer + 1;
		}
		printf("Rocket has been launched!");
	}else if(option==2){
		printf("BOBO");
	}else{
		printf("Sad Life");
	}
		
	}
	
