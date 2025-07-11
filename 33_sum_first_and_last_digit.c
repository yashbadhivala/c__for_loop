#include<stdio.h>

int main(){
    int val=1234;
    int fd=0;
    int ld=val%10;

    while (val>0)
    {  
        fd=val%10;
        val=val/10;
       
        
    }
    printf("first is %d and last is %d and sum is %d",fd,ld,fd+ld);
    

    return 0;
}