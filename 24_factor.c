//6 = 1 2 3 6

#include<stdio.h>

int main(){

    int val=0;
    int factor;

    printf("enter number :");
    scanf("%d",&val);

    for(int i=1;i<=val;i++){

        if(val % i ==0){
            printf("%d\n",i);
        }
    }

    return 0;
}