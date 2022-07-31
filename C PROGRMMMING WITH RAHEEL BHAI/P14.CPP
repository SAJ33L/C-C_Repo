#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
int units, surcharge;
float bill;
printf("Enter Units Consumed:");
scanf( "%d",&units);
if(units>500)
{
bill= units*7;
}
else if(units>300)
{
bill = units*5;
}
else
{
bill = units*2;
}
bill= bill + 150;
if(bill>2000)
{
bill= bill +(bill*5.0/100.0);
}
printf("Total Bill=%.2f",bill);
printf("\n\nMADE BY SAJ33L");
getch();
}