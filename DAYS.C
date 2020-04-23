#include<stdio.h>
#include<conio.h>
main()
{
int a;
clrscr();
{
printf("\nEntre The Day Code: ");
scanf("%d",&a);
if(a==1)
printf("\nSunday");
if(a==2)
printf("\nMonday");
if(a==3)
printf("\nTuesday");
if(a==4)
printf("\nWednesday");
if(a==5)
printf("\nThursday");
if(a==6)
printf("\nFriday");
if(a==7)
printf("\nSaturday");
else
printf("\nERROR");
getch();
return 0;
}