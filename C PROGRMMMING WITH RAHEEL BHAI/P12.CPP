#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
int Salary;
float Net;
printf("Enter Salary:");
scanf( "%d",&Salary);
if(Salary>=20000)
{
Net=Salary-(Salary*7.0/100.0);
}
else if(Salary>=10000)
{
Net=Salary-1000;
}
else
{
Net = Salary;
}
printf("Your Net Salary is %.2f",Net);
printf("\nMADE BY SAJ33L");
getch();
}