#include<stdio.h>

int main(){
    int x;
    scanf("%d", &x);
    
    if(x >= 80) {
        printf("A");
    }if(x >= 70 && x <= 79) {
        printf("B");
    }if(x >= 60 && x <= 69) {
        printf("C");
    }if(x >= 50 && x <= 59) {
        printf("D");
    }if(x < 50) {
        printf("E");
    }

}