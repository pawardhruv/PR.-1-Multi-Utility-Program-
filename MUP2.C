#include<stdio.h>
#include<conio.h>
void main()
{
	int Bs,Hra,Da,Ta;
	clrscr();
	printf(" Enter Base Salary: ");
	scanf("%d",&Bs);
	printf(" Enter Hra: ");
	scanf("%d",&Hra);
	printf(" Enter Da: ");
	scanf("%d",&Da);
	printf(" Enter Ta: ");
	scanf("%d",&Ta);

	int	gs = Bs+Hra+Da+Ta;

	printf("\n Base Salary is: %d",Bs);
	printf("\n Hra is: %d",Hra);
	printf("\n Da is: %d",Da);
	printf("\n Ta is: %d",Ta);
	printf("\n Gross Salary is: %d",gs);
	getch();
}