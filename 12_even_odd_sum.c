#include<stdio.h>

int main(){

    int odd=0;
    int even=0;
    int sum=0;

    for(int i=1;i<=20;i++){

            if(i%2==0){

                even =even+i;

            }

            else{

                odd=odd+i;
            }

    }

    printf("sum of even is : %d\n",even);

    printf("sum of odd is : %d\n",odd);


    return 0;
}