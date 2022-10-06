#include<stdio.h>
#include<conio.h>
void main()
{
	int a, b;
	clrscr();
	printf("\nenter a :");
	scanf("%d", &a);
	b = a;
	printf("\ngb %d", b);
	printf("\nenter b :");
	scanf("%d", &b);
	a = b;
	printf("\na %d ", a);
	getch();
}