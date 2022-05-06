
#include<stdio.h>
int factorial(int); // function declaration

int main()
{
    int num, fact; // initializing variables
    printf("Enter a number : ");
    scanf("%d", &num);
    fact = factorial(num); // calling a function
    printf("Factorial = %d\n", fact);
   
    return 0;
}

int factorial(int a) //function definition
{
    int fac = 1;
    for (int i = 1; i <= a; i++)
        fac = fac*i;

    return(fac);
}

