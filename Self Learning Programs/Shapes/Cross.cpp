// Cross

#include<iostream>
#include<conio.h>


using namespace std;

int main()
{
	int i , height , j;
	char ch;
	
	cout<<"Enter he character for the shape : ";
	cin>>ch;
	
	cout<<"Enter the height of the shape : ";
	cin>>height;
	
	for(i = 1 ; i<=height ; i++)
	{
		 for(j = 1  ; j<=height ; j++)
		 {
		 
		 //in a cross,
            //star will be printed if
            //i is j – digonal line
            //or height-j+1 – another digonal line
            
            if(i==j || height-j+1==i)
             cout<<ch;
             
            else
			cout<<" ";
	     }
	
	cout<<endl;
	     
	}
	
	return 0;
	
}
