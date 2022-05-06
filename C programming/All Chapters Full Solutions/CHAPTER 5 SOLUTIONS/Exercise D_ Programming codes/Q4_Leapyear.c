#include<stdio.h>
#include<conio.h>
#include<math.h>

int leapyear(int a){
    
    if((a%4==0 && a%100!=0  || a%400 ==0 )){
        printf("IS a leapyear");
    }
    else{printf("ISNT a leapyear");}
        }
        
int main(){
    int year;
    printf("Enter any year",year);
    scanf("%d",&year);
    leapyear(year);

    return 0;
}