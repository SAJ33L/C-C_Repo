#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
int y;
printf("Enter a Year:");
scanf( "%d",&y);
if(y%4==0)
{
printf("%d is a \" LEAP YEAR \" ",y);
}
else
printf("%d is \" Not a LEAP YEAR \"");
printf("\nMADE BY SAJ33L");
getch();
}