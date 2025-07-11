#include<stdio.h>

int mian(){

    int pos=0;
    int neg=0;
    int zero=0;
    int val=0;

    for(int i=1;i<=10;i++){
        printf("enter number : %d",i);
        scanf("%d",&val);

        if(val==0){
            zero++;

        }
        else if(val>0){
            pos++;

        }
        else{
            neg++;
        }

    }

    printf("number of postive digits are %d",pos);
    printf("number of negetive digits are %d",neg);
    printf("number of zero digits are %d",zero);

    return 0;
}