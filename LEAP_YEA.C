#include<stdio.h>
#include<conio.h>
int main()
{
int y;
clrscr();
printf("\nEntre A Year In YYYY Format:    ");
scanf("%d",&y);
if(y%4==0)
{
  if(y%100==0)
	{
		if(y%400==0)
       printf("\nEntered Year Is Leap Year.");
		else
		printf("\nEntered Year Is Not Leap Year");
       }
       else
       printf("\nyear is leap year");
       }
       else
	  printf("\nyear is not a leap year");


getch();
return 0;
}