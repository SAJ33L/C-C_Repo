#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
int n;
printf("Enter a Number:");
scanf( "%d",&n);
if(n>0)
{
printf("The Number is Positive");
}
else if(n<0)
{
printf("The Number is Negative");
}
else
{
printf("The Number is Zero" );
}
printf("\nMADE BY SAJ33L");
getch();
}