#include<stdio.h>

int main(){
    int angka, hari, jam, menit, detik, sisa_hari, sisa_jam;
   
    printf("input\n");
    scanf("%d", &angka);

    printf("%d\n", angka);
    hari = angka / 86400;
    sisa_hari = angka % 86400;

    jam = sisa_hari / 3600;
    sisa_jam = sisa_hari % 3600;

    menit = sisa_jam / 60;
    detik = sisa_jam % 60;
    
    printf("output\n");
    if (angka >= 0 && angka <= 60){
        printf("00:00:%02d", detik);
    }else if (angka > 60 && angka <=3599){
        printf("00:%02d:%02d", menit, detik);
    }else if (angka >= 3600 && angka <= 86399){
        printf("%02d:%02d:%02d", jam, menit, detik);
    }else{
        printf("%d hari:%02d:%02d:%02d", hari, jam, menit, detik);
    }

}