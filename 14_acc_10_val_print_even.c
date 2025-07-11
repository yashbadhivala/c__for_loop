#include<stdio.h>

int main(){

    int val=0;
    int odd=0;

    

    for(int i=1 ; i<=10 ; i++){

        printf("enter number %d :\n",i);
        scanf("%d",&val);

       
    
        if(val%2==0)
            printf("%d is even\n",val);
        
    
    }
    

    

    

    return 0;
}