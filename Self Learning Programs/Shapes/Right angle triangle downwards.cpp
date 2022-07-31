// Right angled triangle downwards

#include<iostream>


using namespace std;

int main()
{
	
	int height , i , j;
	char ch;
	
	cout<<"Enter the character for the shape :";
	cin>>ch;
	cout<<"Enter the height of shape : ";
	cin>>height;
	
	for(i=height ; i>=1 ; i--)
	{
		//number of stars in each line is
        //equal to i

		for(j = 1 ; j<=i ; j++)
		{
			cout<<ch;
		}
	
	  //new line after each line	
		cout<<endl;
	}
	
	return 0;
	
}
