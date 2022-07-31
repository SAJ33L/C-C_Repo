// Triangle 

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int height , j ,i;
	char ch;
	
	cout<<"Enter tha character for the shape : ";
	cin>>ch;
	cout<<"Enter the height of shape : ";
	cin>>height;
	//Number of lines is equal to height
	for(i = 1 ; i<=height ; i++)
	{
		//Number of spaces in each line is
        //equal to height – line number
        
        for(j=1 ; j<=height-i; j++)
        {
        	cout<<" ";
        	
		}
		
     //number of stars in each line is equal to
     //(2*line number) – 1	
	 
	 for( j = 1; j<=(2*i)-1 ; j++)
	 {
	 	cout<<ch;
	 	
	 }	
	 
	 cout<<endl;
	 
	}
	
	return 0;
}
