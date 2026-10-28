#include <stdio.h>

int main(){

    int input;
    scanf("%d", &input);

    if(input < 0){
        printf("negatif");
    }else if (input == 0){
        printf("nol");
    }else{
        printf("positif");
    }
    return 0;
}
