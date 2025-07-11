#include<stdio.h>

int main(){

    int val;
    for(int i=1;i<=10;i++){

        printf("enter number %d :",i);
        scanf("%d",&val);

        if(val > 0){
            printf("%d is positive\n",val);
        }
    }
    

    return 0;
}