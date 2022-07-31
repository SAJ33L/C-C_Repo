// right angled triangle upwards

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int height , i , j ;
	char ch;
	cout<<"Enter character for the shape :";
	cin>>ch;
	cout<<"Enter the height : ";
	cin>>height;
	
	// number of lines are equal to height
	for(i =0; i<=height; i++)
	{
		
		//number of stars in each line is equal to the line number
		
		for(j=0;j<=i;j++)
		{
		  cout<<ch;
	    }
		cout<<endl;
	}
	
	
	
}
