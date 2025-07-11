#include<stdio.h>
int main(){
    
    int val=12346;
    val=val/10;
    
    int td=val%10;
    int fd=0;

    while(val>0){
        fd=val%10;
        val=val/10;

    }
printf("first digit is %d and third digit is %d",fd,td);


return 0;

}
