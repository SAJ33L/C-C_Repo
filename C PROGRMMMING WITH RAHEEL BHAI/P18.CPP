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
if(a==b)
{
if(a==c)
  printf("All number are equal");
else
  scanf("Numbers are Different");
}
else
{
printf("All number are different");
}
printf("\n\nMade by SAJ33L");
getch();
}