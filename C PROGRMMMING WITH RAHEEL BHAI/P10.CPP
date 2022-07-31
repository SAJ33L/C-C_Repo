#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
float Salary,Bonus;
int Grade;
printf("Enter your Salary:");
scanf( "%f",&Salary);
printf("Enter your Grade:");
scanf("%d",&Grade);
if(Grade>15)
{
Bonus=Salary*50.0/100.0;
}
else
{Bonus = Salary*25.0/100.0; }
Salary=Salary+Bonus;
printf("Your Total Salary is Rs;%.2f",Salary);

printf("\nMADE BY SAJ33L");
getch();
}