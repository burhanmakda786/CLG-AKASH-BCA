#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	clrscr();
	printf("\nEnter a no to watch weeks name");
	printf("\nEnter your choice : ");
	scanf("%d",&n);
	if(n==1)
	{
		printf("\nSunday");
	}
	if(n==2)
	{
		printf("\nMonday");
	}
	if(n==3)
	{
		printf("\nThuesday");
	}
	if(n==4)
	{
		printf("\nWednesday");
	}
	if(n==5)
	{
		printf("\nthursday");
	}
	if(n==6)
	{
		printf("\nFriday");
	}
	if(n==7)
	{
		printf("\nSaturday");
	}
	getch();
}