#include<stdio.h>

int main(){

    int val=0;
    int counter=0;
    for(int i=1;i<=10;i++){
        
        printf("enter number %d :",i);
        scanf("%d",&val);

        if(val%2==0){
                counter++;
        }
    }

    printf("number of even digits are : %d",counter);

    return 0;
}