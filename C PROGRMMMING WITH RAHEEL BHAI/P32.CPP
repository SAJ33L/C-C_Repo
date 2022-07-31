#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
int n,c;
c=1;
printf("Enter a number:");
scanf("%d",&n);
do
{
printf("%d*%d=%d\n",n,c,n*c);
c=c+1;
}
while (c<=10);
printf("\n\n MADE BY SAJ33L");
getch();
}