#include<stdio.h>

int main(){
    int a;
    scanf("%d", &a);

    if(a > 0 && a <= 9){
        printf("satuan");
    }if(a == 0){
        printf("nol");
    }if(a >= 10 && a < 20){
        printf("belasan");
    }if(a >= 20 && a < 100){
        printf("puluhan");
    }if(a > 99){
        printf("Anda Menginput Melebihi Limit Bilangan");
    }

}