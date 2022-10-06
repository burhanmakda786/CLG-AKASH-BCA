#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	clrscr();
	printf("Enter any no :");
	scanf("%d",&n);
	if(n%7==0)
	{
		printf("this is devide by 7");
	}
	if(n%7!=0)
	{
		printf("This is not divide by 7");
	}
	getch();
}