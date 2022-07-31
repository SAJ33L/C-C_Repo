#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	int time;
 cout<<"This program will show you the time scale message for the day. "<<endl;
 cout<<"Enter the time in Format of 24 hour clock (i.e from 1-24)."<<endl;
 
 cin>>time;
 
 
if (time < 10) 
{
	cout<<endl;
  cout << "Good morning.";
  cout<<endl;
  cout<<endl;
} 
else if (time < 20) 
{
	cout<<endl;
  cout << "Good day.";
  cout<<endl;
  cout<<endl;
}
 
else
 {
 	cout<<endl;
  cout << "Good evening.";
  cout<<endl;
  cout<<endl;
}
system ("pause");
return 0;

}
