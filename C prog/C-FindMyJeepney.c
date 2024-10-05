#include <stdio.h>
int main(void){
    int jeep_num;
    char jeep_letter;

    printf("Enter the jeepney's number: ");
        scanf("%d", &jeep_num);
    printf("Enter the jeepney's letter: ");
        scanf(" %c", &jeep_letter);
    if(jeep_num == 12 && jeep_letter == 'A') printf("Usual location = Carbon");
    else if(jeep_num == 12 && jeep_letter == 'C') printf("Usual location = Panganiban");
    else if(jeep_num == 12 && jeep_letter == 'F') printf("Usual location = Taboan");
    else if(jeep_num == 12 && jeep_letter == 'G' || jeep_letter == 'I') printf("Usual location = Mabolo");
    else if(jeep_num == 12 && jeep_letter == 'L') printf("Usual location = Labangon");
    else if(jeep_num == 13 && jeep_letter == 'C') printf("Usual location = Talamban");
    else if(jeep_num == 14 && jeep_letter == 'D') printf("Usual location = Capitol");
    else{
        return 1;
    }
    
    
    return 0;
}

