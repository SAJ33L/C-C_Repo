#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
char ch;
printf("Enter any Character: ");
scanf("%c",&ch);
if(ch=='a' || ch=='A' || ch=='E' || ch=='e' || ch=='I' || ch=='i' || ch=='O' || ch=='o'|| ch=='U' || ch=='u' )
{
printf("You entered a Vowel: %c",ch);
}
else
{
printf("You did not entered a Vowel: %c",ch);
}
printf("\n\n  MADE BY SAJ33L");
getch();
}