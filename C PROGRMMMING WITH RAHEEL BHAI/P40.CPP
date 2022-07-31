#include<conio.h>
#include<stdio.h>
int fun(int n)
{
return n+10;
}

void main(void)
{
clrscr();
int a;
printf("Enter a Number:");
scanf("%d",&a);
printf("%d",fun(a));
printf("\n\n MADE BY SAJ33L");
getch();
}