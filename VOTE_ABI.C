#include<stdio.h>
#include<conio.h>
main()
{
int y;
clrscr();
printf("\nEntre The Year(YY) To Check Weather The Candidate Is eligable Or NOT: ");
scanf("%d",&y);
if(y>=18)
printf("\nThe Candidate Is Able To Vote");
else
{
printf("\nThe Candidate Is Minor");
printf("\nSorry Candidate Is Not Able To Vote");
}
getch();
return 0;
}
