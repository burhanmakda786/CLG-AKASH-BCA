#include<stdio.h>
#include<conio.h>
void main()
{
	int y;
	clrscr();
	printf("Enter a years :");
	scanf("%d",&y);
	if(y%400==0)
	{
		printf("\n%d is a leap year");
	}
	else if(y%100==0)
	{
		printf("\n%d is not leap year");
	}
	else if(y%4==0)
	{
		printf("\n%d is a leap year");
	}
	else
	{
		printf("\n%d is not leap year");
	}
	getch();
}