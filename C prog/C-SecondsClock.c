#include<stdio.h>
int main(void){
	
	int second, hour, minute;
	int time;
	
	printf("Enter the time (seconds): ");
	scanf("%d", &time);
	
	hour = time / 3600;
	time %= 3600;
	minute = time / 60;	
	second = time % 60;
	printf("%d hr %d min %d sec", hour, minute, second);
	
	
	return 0;
}
