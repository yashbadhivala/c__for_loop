#include<stdio.h>

int main(){
    int val=123;
    int digit=0;
    int sum=0;

    
    while(val>0){
        digit=val%10;
        sum=sum+digit;
        val=val/10;
        
    }

    printf("%d",sum);
    

    return 0;
}