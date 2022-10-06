#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("\nEnter no1 : ");
	scanf("%d",&a);
	printf("\nEnter no2 : ");
	scanf("%d",&b);
	printf("\nEnter no3 : ");
	scanf("%d",&c);
	if(b>a)
	{
		if(c>a)
		{
			printf("c is minimum");
		}
		else
		{
			printf("a is minimum");
		}
	}
	else
	{
		if(c>b)
		{
			printf("\nc is minimum");
		}
		else
		{
			printf("\nb is minimum");
		}
	}
	getch();
}