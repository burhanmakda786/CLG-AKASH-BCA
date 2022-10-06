#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("Enter no 1 : ");
	scanf("%d",&a);
	printf("\nEnter no 2 : ");
	scanf("%d",&b);
	if(a>b)
	{
		printf("\nA is max");
	}
	if(a<b)
	{
		printf("\nB is max");
	}
	getch();
}