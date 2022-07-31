#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
char s;
do
{
 printf("Enter the current state of phone(\'W\' for working \'D\' for dead:");
scanf("%c",&s);
}
while (s!='W' && s!='D');
printf("\n\n MADE BY SAJ33L");
getch();
}