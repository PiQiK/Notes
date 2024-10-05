#include <stdio.h>
int main(void){
	
	printf("Finding the slope\n");
	printf("\n");
	float a, b, c, d, e;
//	a = first x coordinate | b = first y coordinate | c = second x coordinate | d = second y coordinate
	printf("Enter your first x number ->   ");
	scanf("%f",&a);
	printf("Enter your first y number ->   ");
	scanf("%f",&b);
	printf("Enter your second x number ->  ");
	scanf("%f",&c);
	printf("Enter your second y number ->  ");
	scanf("%f",&d);
//	formula for slope = (y2 - y1) / (x2 - x1)
	e = (d - b) / (c - a);
//	e = slope
	printf("The slope is -> %.2f", e);
	
	return 0;
}
