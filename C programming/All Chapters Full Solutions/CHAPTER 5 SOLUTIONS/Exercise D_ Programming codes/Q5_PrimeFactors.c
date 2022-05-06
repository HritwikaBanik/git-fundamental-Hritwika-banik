#include<stdio.h>
#include<conio.h>
#include<math.h>


int main(){
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    int f=primefactors(a);
    printf(f);


    return 0;
}
int primefactors(int y){
    {
     for(int i=0;i<y/2;i++){
         if(y%i==0)
            return i;
     }
     for(int i=0;i<y/2;i++)
     {
     if( bool isprime(i)== true){

         return i;}
     }
    }

}
