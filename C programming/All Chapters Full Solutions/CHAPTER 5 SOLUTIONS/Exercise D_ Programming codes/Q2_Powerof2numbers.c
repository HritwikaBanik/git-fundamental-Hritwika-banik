#include<stdio.h>
#include<math.h>

int power(int base, int exp)  
{  
    int i, result = 1;  
  
    for(i = 1; i <= exp; i++)  
    {  
        result = result * base;  
    }  
  
    return(result);  
}  
  
int main()  
{  
    int a, b;  
  
    printf("Enter integer values for base and exponent\n");  
    scanf("%d%d", &a, &b);  
  
    printf("%d to the power of %d is %d\n", a, b, power(a, b));  
  
    return 0;  
}  