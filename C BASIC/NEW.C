#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	char op;
	clrscr();
	printf("\n\t\t\t\tCalculator");
	printf("\nEnter firts number :");
	scanf("%d",&a);
	printf("\nEnter operator +,-,*,/:");
	scanf("%c",&op);
	printf("\nEnter second number :");
	scanf("%d",&b);
	if(op=='+')
	{
	printf("\n %d + %d = %d",a,b,a+b);
	}
	else
	{
	printf("\nthis is invalide");
	}
	getch();
}