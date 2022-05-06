#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
    printf("The sum of first 25 natural numbers:%d", sum(25));
    return 0;
}
int sum(int num)  
{  
    if(num)  
        return(num + sum(num-1));  
    else  
        return 0;  
    }