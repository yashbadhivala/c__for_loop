#include<stdio.h>

int main(){
    int count=0;
    int val;
    for(int i=1;i<=10;i++){

        printf("enter number %d :",i);
        scanf("%d",&val);

        if(val > 0){
            count++;
        }
            
    }
    
    printf("positive numbers are : %d",count);

    return 0;
}
