#include<stdio.h>
#include<conio.h>
main()
{
long int ns,cy,jy,ny,s,p;
clrscr();
printf("\nEnter The Joining Year: ");
scanf("%ld",&jy);
printf("\nEnter Current Year: ");
scanf("%ld",&cy);
printf("\nEntre The Fixed Salary In Month: ");
scanf("%ld",&s);
ny=cy-jy;
p=s*ny*12;
ns=p+5000;
if(ny>=3)
printf("\nThe Net Salary Is %ld:",ns);
else
exit(0);
 getch();
 return 0;
  }
