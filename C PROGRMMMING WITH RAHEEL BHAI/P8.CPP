#include<conio.h>
#include<stdio.h>
#include<math.h>
void main()
{
clrscr();
int x;
double sqroot=0.0;
printf("Enter a number:");
scanf( "%d",&x);
if(x>=0)
{sqroot=sqrt(x);
printf("The Square Root of %d is =%1f",x,sqroot);
}
else
printf("Invalide Input");
printf("\nMADE BY SAJ33L");
getch();
}