#include<stdio.h>
#include<conio.h>
main()
{
int a;
clrscr();
printf("\nEntre The Number To Check Weather It Is Odd Or Even: ");
scanf("%d",&a);
if(a%2==0)
printf("\nThe Number Is Even");
else
printf("\nThe Entered Number is Odd");
getch();
return 0;
}