#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
     int num;
     printf("Enter a 5 digit Number:");
     scanf("%d",&num);
     sum(num);
     printf("\nSum digits without recursion= %d",sum(num));
     recursivesum(num);
     printf("\nSum digits with recursion= %d",recursivesum(num));
    return 0;
}

int sum(int n)// function without recursion
{

    int sum=0, rem;
    while(n>0){
        rem=n%10; 
        sum =sum + rem;
        n = n/10;
    }
    return(sum);
}

int recursivesum(int n){ // function with recursion
     int sum=0, rem;
     if(n!=0){
         rem = n%10;
         sum = rem +recursivesum(n/10);
     }
     return sum;
}