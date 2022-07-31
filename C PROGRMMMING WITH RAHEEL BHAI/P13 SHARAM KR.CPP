#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
int Score;
printf("Enter your Test Score:");
scanf( "%d",&Score);
if(Score>=90)
{
printf("Your Grade is \"A\"");
}
else if(Score>=80)
{
printf("Your Grade is \"B\"");
}
else if(Score>=70)
{
printf("Your Grade is \"C\"");
}
else if(Score>=60)
{
printf("Your Grade is \"D\"");
}
else
{
printf("Your Grade is \"F\"");
printf("\nSharam Kr JANI Doob Mro");
}
printf("\nMADE BY SAJ33L");
getch();
}