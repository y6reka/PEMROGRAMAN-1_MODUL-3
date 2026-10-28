#include <stdio.h>

int main(){

    int input, hasil_hari, hasil_jam, hasil_menit, hasil_detik;
    scanf("%d", &input);

    hasil_hari = input / 86400;
    hasil_jam = (input % 86400) / 3600;
    hasil_menit = (input % 3600) / 60;
    hasil_detik = input % 60;

    if(hasil_hari > 0){
        printf("%d hari %02d:%02d:%02d", hasil_hari,hasil_jam, hasil_menit,hasil_detik);
    }else{
        printf("%02d:%02d:%02d", hasil_jam, hasil_menit, hasil_detik);
    }

    


    return 0;
}
