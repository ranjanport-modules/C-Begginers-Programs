#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
clrscr();
printf("\nEntre The First Number=1: ");
scanf("%d",&a);
printf("\nEntre The Second Number=2: ");
scanf("%d",&b);
printf("\nEntre The Third Number=3: ");
scanf("%d",&c);
if(a>b)
	if(a>c)
		if(b>c)
	{
	printf("\nNumber=1 is Greater. ");
		printf("\nAlso Number=2 is Greater Than Number=3. ");
			printf("\n\nNumber=3 is Smallest. ");

	}
  if(b>a)
	if(b>c)
	{
	printf("Number=2 Is Greater");
	}
		if(a>b)
       {
	printf("\n\nAlso Number=1 is Greater Than Number=2.");

	}
			if(a<b)
			      {
				printf("\n\nAlso Number=2 is Greater Than Number=1.");
				}
 if(c>a)
	if(c>b)

	{
	printf("\nNumber=3 is Greater");
	}

 if(a==b)
	if(b==c)
		if(a==c)
			if(b==a)
	{
	printf("\nEntered Numbers Are Same.");
	 }

getch();
return 0;
}