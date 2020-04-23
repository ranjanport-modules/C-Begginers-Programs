#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
int x1,x2,x3,y1,y2,y3,AB,BC,AC;
clrscr();
     printf("\nEnter The a Cordinate:  ");
      scanf("%d%d",&x1,&y1);
     printf("\nEnter The b Cordinate:  ");
      scanf("%d%d",&x2,&y2);
     printf("\nEnter The x3 Cordinate:  ");
      scanf("%d%d",&x3,&y3);


   AB=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
   BC=sqrt(pow(x3-x2,2)+pow(y3-y2,2));
   AC=sqrt(pow(x3-x1,2)+pow(y3-y1,2));

	if(AC==BC+AB||AB==BC+AC||BC==AB+AC)
	    printf("\nPoints Are collinear");
		else
		printf("\nPoints are Not Collinear");
getch();
return 0;
}
