#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
    int n;
    printf("Enter any Number");
    scanf("%d",&n);
    printf("The binary equivalent of the number is:%d",binaryequivalent(n));
    return 0;
}

int binaryequivalent(int n){
    int rem,k=1;
    int binary=0;
    while(n!=0){
        rem=n%2;
        n=n/2;
        binary=binary+rem*k; 
        k=k*10;

    } return binary;
    
            }