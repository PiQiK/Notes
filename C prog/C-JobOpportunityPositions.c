#include<stdio.h>
#define TOTAL_NUM 5

int main(void){
    char team[TOTAL_NUM], i;

    printf("Enter the 5-man team's numbers: ");
    for(i = 0; i < sizeof(team)/sizeof(char); i++){
        scanf("%c", &team[i]);
        printf("%c ", team[i]);
    }
    return 0;
}
