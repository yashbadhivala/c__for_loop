#include<stdio.h>

int main(){

    int val=0;
    int pos=0;
    int neg=0;
    int sum=0;

    for(int i=1;i<=10;i++){

        printf("enter number %d :\n",i);
        scanf("%d",&val);

        if(val<0){
            neg=neg+val;

        }

        else{
            pos=pos+val;
        }
    }

    sum=pos+neg;
    printf("sum is %d",sum);
    
    return 0;
}