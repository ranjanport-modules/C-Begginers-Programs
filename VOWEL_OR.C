#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
printf("\nEntre The Character To Check It is Vowel Or Consonant: ");
scanf("%c",&ch);

if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='o'||ch=='U')
{
printf("\nEnterd Character Is Vowel");
}
else
{
printf("\nEnterd Character IS Consonant");
}
getch();
}