#include<stdio.h>

int main(){

    int val=6;

    for(int i=val-1;i<=val;i--){
            if(val % i ==0){
                printf("%d",i);
                break;
            }
    }

    return 0;
}