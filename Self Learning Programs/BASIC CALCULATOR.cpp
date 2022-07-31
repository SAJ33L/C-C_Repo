#include<iostream>     
#include<conio.h>
using namespace std;   
int main()    
{
	int d;
	char C;
	long a,b,c;
	
	
	
	cout<<"\t\t\t\tWelcome to the Program\n\t\tThis is a Basic Calculator to perform your basic calculations"<<endl;
	do{
	        
	cout<<"Enter the First Number : ";    
	cin>>a;
	cout<<"Enter the operator for calculation : ";
	cin>>C;         
	cout<<"Enter the Second Number : ";
	cin>>b;
	if(C== '+')
	{
	c= a+b;
	cout<<a<<"+" <<b<<"=" <<c <<endl;    
    cout<<"The Result is : "<<c <<endl;
	}
	
	else if(C== '-')
	{
	c= a-b;
	cout<<a<<"-" <<b<<"=" <<c <<endl;    
    cout<<"The Result is : "<<c <<endl;
	}
	
	else if(C== '/')
	{
	c= a/b;
	cout<<a<<"/" <<b<<"=" <<c <<endl;    
    cout<<"The Result is : "<<c <<endl;
	}
	
	else if(C== '*')
	{
	c= a*b;
	cout<<a<<"*" <<b<<"=" <<c <<endl;    
    cout<<"The Result is : "<<c <<endl;
	}
	else
	{
	cout<<"Error while execution ......."<<endl;	
	}
	
	cout<<endl;
	cout<<endl;
	cout<<"Note: Press 1 either to continue or 0 to leave : ";
	cin>>d;
	do{
	
	if(d>1||d<=0)
	 {
	    cout<<"Invalid Input!!!!"<<endl;
	    cin>>d;
	    if(d==0)
		{
		
		continue;}
	 }
	}while(d<1 && d!=0);  
    cout<<endl;               
    cout<<endl;
    cout<<endl;
	
     }while(d==1);
     
cout<<"Made by \"SAJEEL KHAN\"\nRoll no: \'32\'"<<endl;     
 
	system ("pause");
	
return 0;
}
