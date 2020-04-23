#include<stdio.h>
#include<conio.h>
main()
{
int a,b;
clrscr();
printf("\nEntre Number 1: ");
scanf("%d",&a);
printf("\nEntre Number 2: ");
scanf("%d",&b);
if(a==b)
printf("\nBoth The Numbers Are same");
else
printf("\nNumbers Are Different");
getch();
return 0;
}