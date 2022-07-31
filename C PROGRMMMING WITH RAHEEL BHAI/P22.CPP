#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
int a,b;
char op;
printf("Enter the First number , Operator and the Second number: ");
scanf("%d %c %d ",&a,&op,&b);
switch(op)
{
case '+':
  printf("%d+%d=%d",a,b,a+b);
  break;
case '-':
  printf("%d-%d=%d",a,b,a-b);
  break;
case '*':
  printf("%d*%d=%d",a,b,a*b);
  break;
case '/':
  printf("%d/%d=%d",a,b,a/b);
  break;
case '%':
  printf("%d%%%d=%d",a,b,a%b);
  break;
default:
  printf("Invalid Operator!");
}
printf("\n\n  MADE BY SAJ33L");
getch();
}