#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("Enter no1 :");
	scanf("%d",&a);
	printf("\nEnter no2 :");
	scanf("%d",&b);
	if(a>b)
	{
		printf("A is maximum no");
	}
	else
	{
		printf("B is maximum no");
	}
	getch();
}