#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
int a,b;
printf("Enter two numbers:");
scanf("%d%d",&a,&b);
a>b? printf("%d is larger",a) : printf("%d is larger",b);
printf("\n\n  MADE BY SAJ33L");
getch();
}