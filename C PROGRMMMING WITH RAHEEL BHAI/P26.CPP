#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
int c,sum;
c=1;
sum=0;
while (c<=5)
{
 printf("%d \n",c);
 sum=sum+c;
 c=c+1;
}
printf("Sum is %d",sum);
printf("\n\n MADE BY SAJ33L");
getch();
}