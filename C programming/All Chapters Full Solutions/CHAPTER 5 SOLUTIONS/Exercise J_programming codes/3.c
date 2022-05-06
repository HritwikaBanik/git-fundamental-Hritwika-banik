#include<stdio.h>
#include<conio.h>

int main(){
    printf(" First 25 numbers from fibbonacci series are:");
    fibbo(25);
    return 0;
}
int fibbo(int n){
    int n1=0,n2=1,n3;
    printf("\n%d \n%d",n1,n2);
    for(int i=2;i<n;i++){
        n3=n1+n2;
        printf("\n%d",n3);
        n1=n2;
        n2=n3;
    }
    return ;
    }

