#include<stdio.h>

int main(){

    int val=0;
    int odd=0;
    int even=0;
    for(int i=1;i<=10;i++){
        
        printf("enter number %d :",i);
        scanf("%d",&val);

        if(val%2==1){
                odd++;
        }

        else{
                even++;
        }
    }

    printf("number of odd digits are : %d",odd);
    printf("number of even digits are : %d",even);

    return 0;
}