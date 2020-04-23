#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
int a,b,x,f1,f2;
clrscr();
printf("\nEnter The Value Of 'a' if The Equation is in the Form ax^2+b: ");
scanf("%d",&a);
printf("\nEnter The Value Of 'x' if The Equation is in the Form ax^2+b: ");
scanf("%d",&x);
printf("\nEnter The Value Of 'b' if The Equation is in the Form ax^2+b: ");
scanf("%d",&b);
f2=a*x+b*x;
f1=a*pow(x,2)+b;
if(b>=2)
{
printf("\nThe Value of The Quadratic Equation is: %d ",f1);
}
if(b<2)
{
printf("\nThe Value of The Quadratic Equation is: %d ",f2);
}
getch();
return 0;
}