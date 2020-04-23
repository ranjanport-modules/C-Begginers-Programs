#include<stdio.h>
#include<conio.h>
void main()
{
int roll_no,total,m1,m2,m3;
float average;
clrscr();
printf("entre the roll number : ");
scanf("%d",roll_no);
printf("entre the marks in subject 1 :  ");
scanf("%d",&m1);
printf("entre the second subject marks : ");
scanf("%d",&m2);
printf("entre the maarks of third subject : ");
scanf("%d",&m3);
total=m1+m2+m3;
average=total/3.0;
printf("\nstudent roll number is : %d  ",roll_no);
printf("\nmarks 1 : %d", m1 );
printf("\nmarks 2 : %d", m2);
printf("\nmarks 3 : %d", m3);
printf("\ntotal obtained maeks is : %d" , total);
printf("\naverage marks is %f",average);
getch();
}
