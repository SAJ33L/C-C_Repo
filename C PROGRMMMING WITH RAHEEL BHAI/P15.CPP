#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
int choice;
float area,radius,circumferance;
printf("Enter Radius:");
scanf( "%f",&radius);
printf("Enter 1 for Area & 2 for Circumferance:");
scanf("%d",&choice);
if(choice==1)
{
area=radius*radius*3.141;
printf("Area:%5.2f\n",area);
}
else if(choice==2)
{
circumferance= 2.0*3.141*radius;
printf("Circumference:%5.2f\n",circumferance);
}
else
{
printf("Invalid Choice");
}
printf("\n\nMADE BY SAJ33L");
getch();
}