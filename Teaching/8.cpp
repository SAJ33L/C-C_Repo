#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	
	int costPrice;
	int sellingPrice;
	
   cout<<"This program will show you selling prices of item."<<endl;
  
 
  	cout<<"Enter the cost price for item  :";
  	cin>>costPrice;
  	cout<<"Enter the selling price for item :";
  	cin>>sellingPrice;


  	cout<<"The difference between selling and cost price of item is :"<<sellingPrice-costPrice<<endl;
  	if(costPrice<sellingPrice)
  	cout<<"Seller made profit on item."<<endl;
  	else
  	cout<<"Seller incurred loss on item."<<endl;
  	
  	cout<<"Profit/Loss made on Item is :"<<sellingPrice-costPrice;
  	
  
   return 0;	
}
