#include<stdio.h>

int main(){

    int val=153;
    int sum=0;
    int digit=0;
    int temp=val;


    while(val>0){
        digit=val %10;
        sum=sum+(digit*digit*digit);
        val=val/10;

    }

    if(temp==sum){

        printf("this is armstrong number .....");

    }
    

    return 0;
}
