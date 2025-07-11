#include<stdio.h>

int main(){

    int val=0;

    int sum=0;
    printf("enter number :");
    scanf("%d",&val);

    int temp=val;

    for(int i=1;i<val;i++){
        if(val%i==0){
            sum=sum+i;
        }
    }
    if(temp==sum){
        printf("this is perfect number .");

    }
    else{
        printf("this is not perfect number .");
    }


    return 0;
}