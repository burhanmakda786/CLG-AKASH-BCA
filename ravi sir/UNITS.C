#include<stdio.h>
#include<conio.h>
void main()
{
	int n,a;
	clrscr();
	printf("Enter your bill Unites :");
	scanf("%d",&n);
	if(n<=100)
	{
		a=n*3;
		printf("\nYour bill amount is %d",a);
	}
	else
	{
		a=n*5;
		printf("\nYour bill amount is %d",a);
	}
	getch();
}