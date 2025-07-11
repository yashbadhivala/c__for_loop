#include<stdio.h>

int main(){

    int val=0;
    int sum=0;
    printf("enter number :");
    scanf("%d",&val);

    

    for (int i=1;i<=val;i++)
    {
        sum=sum+val;
    }

    printf("power is %d",sum);
    
    return 0;
}