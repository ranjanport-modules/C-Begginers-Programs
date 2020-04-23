#include<stdio.h>
#include<conio.h>
main()
{
int rev,a,b,k,l,c,d,e,f,n,g,h,t;  //variable declaration
clrscr();
printf("Entre Any Four Digit Number: ");
scanf("%d",&n);
a=n%10;  //last digit
b=n/10;   //convert to three
c=b%10;    //last digit
d=b/10;   //two digit
e=d%10;     //last digit
f=d/10;    //one digit
g=f%10;  //last digit
rev=((a*1000)+(c*100)+(e*10)+(g*1));
if(n==rev)
{
	printf("\nEntered Number is Palindrome.");
}
if(n!=rev)
{
	printf("\nThe Entered Number is Not a Palindrome.");
}
getch();
return 0;
}