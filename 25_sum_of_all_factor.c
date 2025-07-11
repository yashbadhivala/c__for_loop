#include<stdio.h>

int main(){

    int val=4;
    int sum=0;
    int fact=0;

    //printf("enter number :");
    //scanf("%d",&val);

    for(int i=1;i<=val;i++){

        if( val % i ==0){
           fact=fact+i;
            sum=sum+i;
        }
        
    }

    printf("sum of factor is : %d",sum);

    return 0;
}