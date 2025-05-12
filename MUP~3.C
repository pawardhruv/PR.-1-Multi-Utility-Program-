#include<stdio.h>
#include<conio.h>
void main()
{
	int fa, sa;
	clrscr();
	printf(" enter the first angle: ");
	scanf("%d",&fa);
	printf(" enter the second angle: ");
	scanf("%d",&sa);

	int ta=180-(fa + sa);

	printf("\n first angle is: %d", fa);
	printf("\n second angle is: %d", sa);
	printf("\n third angle is: %d", ta);
	getch();
}