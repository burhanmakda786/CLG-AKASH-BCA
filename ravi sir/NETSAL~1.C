#include<stdio.h>
#include<conio.h>
void main()
{
    float bs,DA,TA,HRA,PF,ns,TX;
    clrscr();
    printf("Input Basic Salary: ");
    scanf("%f", &bs);
    TA = bs * 10 / 100;
    DA = bs * 25 / 100;
    HRA = bs * 15 / 100;
    PF = bs * 12 / 100;
    TX = bs * 7.5 / 100;
    ns = (bs + TA + DA + HRA) - (TX + PF);
    printf("TA: %.2f",TA);
    printf("DA: %.2f\n", DA);
    printf("HRA: %.2f\n", HRA);
    printf("TAX: %.f\n",TX);
    printf("PF: %.2f\n", PF);
    printf("Basic Salary: %.2f\n", bs);
    printf("Net Salary: %.2f", ns);
    getch();
}