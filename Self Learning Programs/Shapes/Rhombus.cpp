// Rhombus

#include<iostream>

using namespace std;

int main()

{
	int height , i , j , k;
	char ch;
	
	cout<<"Enter the character for the sahpe : ";
	cin>>ch;
	cout<<"Enter the height of the shape : ";
	cin>>height;
	
	for(i= 1; i<=height ; i++)
	{
		for(k=1;k<=i-1;k++)
		{
			cout<<" ";
			
		}
		
		for(j = 1 ; j<=height ; j++)
		{
			cout<<ch;
			
		}
		
		cout<<endl;
		
	}
	
	return 0;
}
