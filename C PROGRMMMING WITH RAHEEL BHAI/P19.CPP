#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
int a,b,c;
printf("Enter three Numbers:");
scanf("%d%d%d",&a,&b,&c);
//scanf("%d",&a );
//scanf("%d",&b);
//scanf("%d",&c);
if(a>b && b>c)
{
  printf("Maximum number is %d",a);
  }
else if(b>a && b>c)
{
  printf("Maximum number is%d",b);
}
else
{
  printf("Maximum number %d",c);
}
printf("\n\nMade by SAJ33L");
getch();
}