#include<stdio.h>
#include<conio.h>
void main()
{
	int c;
	clrscr();
	printf("enter c:");
	scanf("%d",&c);
	float F=(1.8*c)+32;
	printf("\n temperature in celsius is: %d",c);
	printf("\n temperature in farenheit is : %.1f",F);
	getch();
}
