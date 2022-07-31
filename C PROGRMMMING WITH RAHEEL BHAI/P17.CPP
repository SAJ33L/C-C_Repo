#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
int a,b,c;
printf("Enter three Numbers:");
scanf( "%d, %d, %d",&a,&b,&c);
if(a<b)
{
if(a<c)
  printf("%d is smallest number",a);
else
  printf("%d is smallest number",c);
}
else
{
if(b<c)
printf("%d is smallest number",b);
else
printf("%d is smallest number",c);
}
printf("\n\nMADE BY SAJ33L");
getch();
}
