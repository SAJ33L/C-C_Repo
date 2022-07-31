#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	
char choice;
int range;

cout<<"Enter the range to check for even or odd numbers :";
cin>>range;
cout<<"Enter choice E for even and O for odd :";
cin>>choice;

if(choice=='e')
{
cout<<"The even numbers are :"<<endl;
for(int i = 0 ; i<=range ; i++)
{
	if(i%2==0)
	
	cout<<i<<" ";
	
}
}

else if(choice=='o')
{
cout<<"The odd numbers are :"<<endl;
for(int i = 0 ; i<=range ; i++)
{
	if(i%2!=0)
	{
	
	cout<<i<<" ";}
	
}
}
else 
cout<<"Invalid input.";
  
   return 0;	
}
