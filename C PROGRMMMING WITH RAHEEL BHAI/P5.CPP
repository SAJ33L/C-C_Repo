#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
int a,b,c,max;
printf("Enter the number: ");
scanf( "%d",&a);
printf("Enter the second number:");
scanf("%d",&b);
printf("Enter the third number:");
scanf("%d",&c);
max= a;
if(b>max)
max=b;
if(c>max)
max=c;
printf("The Maximun Number is:%d",max);
printf("\nMADE BY SAJ33L");
getch();
}