#include<conio.h>
#include<stdio.h>
#define PI 3.141
void main()
{
clrscr();
float r,area,circumference;
printf("Enter the Radius:");
scanf("%f",&r);
area=PI*r*r;
circumference= 2.0*PI*r;
printf("\nArea is:%5.2f\n",area);
printf("Circumference is:%5.2f\n",circumference);
getch();
}