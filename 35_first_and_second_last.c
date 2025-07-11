//  1 2 3 4  = 1  +  2  = 3

#include<stdio.h>
int main(){
    int val=9785654;
    int fd=0;
    int sld=(val/100)%10;
    

   while (val>0)
    {   
       
        fd=val%10;
        val=val/10;

        
    }
   printf("first digit is %d and seond last digit is %d and sum is %d",fd,sld,fd+sld);
    

    return 0;
}