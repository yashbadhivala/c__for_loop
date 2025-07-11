#include<stdio.h>

int main(){

    int val=123;
    int reverse=0;
    int digit=0;
    int sum=0;


    while(val>0){
        digit=val%10;
        reverse=(reverse*10)+digit;
        val=val/10;
        
    }

    printf("%d",reverse);


    return 0;
}