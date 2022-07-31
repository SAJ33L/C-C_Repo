#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

int main()
{
	// making my name with loops
	
	int sizeOfName;
	cout <<"Enter the Size for the name : ";
	cin>>sizeOfName;
	
	for(int i = 0; i<=sizeOfName ; i++)
	{
	
		cout<<"s";
	        
	}
		    for(int j = 0 ; j<=sizeOfName ; j++)
	    {
			if(j%2==0)
		continue;
	        else
	        cout<<"s"<<endl;
       }
		
		for(int i = 0; i<=sizeOfName ; i++)
	{
	
		cout<<"s";
	}
		for(int i = 0; i<=sizeOfName ; i++)
		{
		
		    for(int j  = sizeOfName  ; j>=0 ; j--)
	    {
		if(j==i)
		cout<<"s";
		else 
		cout<<" ";
	    } 
        }
       
	
  return 0;	
}
