#include<iostream>
using namespace std;

int main()
{
	
	int a;
	cout<<"Enter the integer to start loop";
	cout<<endl;
	cin>>a;
	for(a<=10;)
	{
			   if(a%2==1)
		{
			 a++;
			//cout<<a<<endl;
		}
		if(a%2==0)
		{
		  cout<<a<<endl;
		  a+2;	
		}
	a=a+2;

		
	}
}
