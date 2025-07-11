#include<stdio.h>

// 1 2 3 4 => 2 + 4 = 6

int main(){
    int val=1234;

    int ld=val % 10;

    val=val/10;

    int sld=0;

    while (val>10)
    {
        
        sld=val%10;
        val =val/10;
    }

    printf("second last digit is %d last digit is %d and sum is %d",sld,ld,sld+ld);
    

    return 0;
}