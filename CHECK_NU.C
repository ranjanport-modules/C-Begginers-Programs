#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("\nEntre Any Number To Know it is (+,-,0) ");
scanf("%d",&a);
if(a>0)
{
	printf("\nThe Number is Positive(+) ");
}
if(a==0)
{
	printf("\nThe Entered Number is Zero ");
}
if(a<0)
{
	printf("\nThe Entered Number is Negative(-) ");
}
getch();
}