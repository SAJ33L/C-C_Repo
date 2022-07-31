#include<conio.h>
#include<stdio.h>
void power(int a,int b);
void main()
{
clrscr();
int x,y;
printf("Enter two Numbers:");
scanf("%d%d",&x,&y);
power(x,y);
printf("\n\n MADE BY SAJ33L");
getch();
}
void power(int a,int b)
{
int i,p;
p=1;
for(i=1;i<=b;i++)
p=p*a;
printf("%d raise to the power %d is %d",a,b,p);
}
