#include<stdio.h>
#include<conio.h>

void main()
{
	int acc, guj, hindi, eng, state;
	float avg;
	clrscr();
	printf("\n acc :");
	scanf("%d", &acc);
	printf("\n guj :");
	scanf("%d", &guj);
	printf("\n hindi :");
	scanf("%d", &hindi);
	printf("\n eng :");
	scanf("%d", &eng);
	printf("\n state :");
	scanf("%d", &state);
	printf("acc:-%d \n guj:-%d\n hindi:-%d\n eng:-%d\n state:-%d\n", acc, guj, hindi, eng, state);
	printf("total marks:-%d \n", acc + guj + hindi + eng + state);
	avg = acc + guj + hindi + eng + state / 5;
	printf("per:-%f", avg);
	getch();
}