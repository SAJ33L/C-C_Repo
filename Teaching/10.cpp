#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int i = 1;
	int costPrice[15];
	int profitPrice[15];
	
   cout<<"This program will show you selin prices of items."<<endl;
  for(int j=0;j<15;j++)
  {
 
  	cout<<"Enter the cost price for item "<<i<<" :";
  	cin>>costPrice[j];
  	cout<<"Enter the profit price for item "<<i<<" :";
  	cin>>profitPrice[j];
  	i++;
  }
  i = 1;
  for(int j = 0;j<15;j++)
  {

  	cout<<"The selling price of item "<<i<<" is :"<<costPrice[j]+profitPrice[j];
  	i++;
  }
   return 0;	
}
