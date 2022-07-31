#include<iostream>     //library files / header files / preprocessor directives
using namespace std;   //input / output stream
int main()    //data return by main body
{
	int a,b,c;        // variable declaration
	cout<<"Enter the First Number : ";    
	cin>>a;         // variable initiallization
	cout<<"Enter the Second Number : ";
	cin>>b;
	c= a-b;
	cout<<a<<"-" <<b<<"=" <<c <<endl;    //manipulator i.e: endl;
    cout<<"The Result is : "<<c <<endl;      
    cout<<endl;               // manipulator endl can be also used seperately
    cout<<endl;
    cout<<endl;
	cout<<"Made by \"SAJEEL KHAN\"\nRoll no: \'32\'";       //use of escape sequence i.e: \n , \" , \'
	
	return 0;

}
