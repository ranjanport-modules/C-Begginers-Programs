#include<stdio.h>
#include<conio.h>
void main()
{
int rev,a,b,c,d,e,f,g,h,i;
char answer;
clrscr();
printf("\nentre the number");
scanf("%d",&a);
b=a%10;
c=a/10;                       /*printf ke andar %d%d%d%d -- abcd likhne par
				reverse wala program ka kam karega*/
d=c%10;
e=c/10;
f=e%10;
g=e/10;         /*To reverse the number use the algorithm: let "rev" be a variable*/
h=g%10;	       /*  and use rev=((b*1000)+(d*100)+(f*10)+(h*1);*/
i=b+d+f+h;
rev=((b*1000)+(d*100)+(f*10)+(h*1));
printf("the value of sum is %d ",i);
printf("\nwhould you like to print reverse y or n:");
while(scanf(" %c",&answer)=='y');
{
printf("%d",rev);
}
if(answer=='n')
{	 exit(0);
}
getch();
}