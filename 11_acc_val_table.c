#include<stdio.h>

int main(){

    int val;

    printf("enter number for printing table : ");
    scanf("%d",&val);

    for(int i=1 ; i<=10 ; i++){

        printf("%d * %d = %d\n",val,i,val*i);

    }

    return 0;
}