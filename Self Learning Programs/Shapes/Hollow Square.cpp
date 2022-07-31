// Hollow Square 

#include<iostream>

using namespace std;

int main()

{
	int height , i , j;
	char ch;
	
	cout<<"Enter the character for the shape : ";
	cin>>ch;
	
	cout<<"Enter the height of the shape : ";
	cin>>height;
	
	for(i = 1; i<=height ; i++)
	{
		for(j=1 ; j<=height ; j++)
		{
			//stars will be printed at top, bottom and side edges
            //j==1 for left side edge
            //j==height for right side edge
            //i==1 for top line
            //i==height for last line
            
            if(j==1||j==height||i==1||i==height)
             cout<<ch;
             
            else
			 cout<<" ";
			 
			  
		}
		
		cout<<endl;
		
	}
	
	return 0;
	
}
