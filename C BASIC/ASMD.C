/*write a c program and
addishion subtraction
and multi and division
perform*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	a=10;
	b=20;
	c=a+b;
	printf("\nA=%d,B=%d, Adition=%d",a,b,c);
	a=50;
	b=30;
	c=a-b;
	printf("\nA=%d,B=%d,Subtraction=%d",a,b,c);
	a=2;
	b=3;
	c=a*b;
	printf("\nA=%d,B=%d, Multiplication=%d",a,b,c);
	a=10;
	b=5;
	c=a/b;
	printf("\nA=%d,B=%d, Division=%d",a,b,c);
	getch();
}