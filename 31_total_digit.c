#include<stdio.h>

int main(){

    int val=123;
    int ctr=0;

    while(val>0){
        ctr++;
        val=val/10;
    }

    printf("%d",ctr);


    return 0;
}