#include<stdio.h>
#include<conio.h>

void chng(int*, int*, int*); //function declaration

int main()
{
	int a, b, c;
	printf("Enter three numbers : ");
	scanf("%d%d%d", &a, &b, &c);

	printf("\n\nNumbers Entered\n\na : %d	b : %d	c : %d\n", a, b, c);
	chng(&a, &b, &c); //function calling

	printf("\nAfter Shifting\n\na : %d	b : %d	c : %d\n", a, b, c);
	return 0;

}
void chng(int *a, int *b, int *c)
{
	int x;
	x = *c;
	*c = *b;
	*b = *a;
	*a = x;
}