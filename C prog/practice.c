#include <stdio.h>
#include <stdlib.h>

int main(){
    int num = 123;
    int digits[100];


for(int i = 0; i < num; i++){
    int j = 0;
    while(num){
        digits[j] = num % 10;
        num /= 10;
    }
}
}