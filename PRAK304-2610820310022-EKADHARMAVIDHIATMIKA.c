#include <stdio.h>

int main(){

    int input;
    scanf("%d", &input);

    if(input == 0){
        printf("Nol");
    }
    else if(input > 0 && input < 10){
        printf("Satuan");
    }
    else if (input == 10){
        printf("Puluhan");
    }
    else if(input > 10 && input < 20){
        printf("Belasan");
    }
    else if(input >= 20 && input < 99){
        printf("Puluhan");
    }
    else{
        printf("Anda Menginput Melebihi Bilangan");
    }

    return 0;
}
