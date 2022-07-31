#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int choice;
   cout<<"This program will ask your choice Drinks"<<endl;
   cout<<"Enter your choice for the drinks.";
   cin>>choice;
   if(choice==1)
   cout<<"You choosed water.";
   else if(choice==2)
   cout<<"You choosed coke.";
   else if(choice==3)
   cout<<"You choosed fanta.";
   else if(choice==4)
   cout<<"You choosed sprite.";
   else if(choice==5)
   cout<<"You choosed dew.";
   else
   cout<<"Your choice is wrong.";
   
   return 0;	
}
