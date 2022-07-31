#include<iostream>
#include<conio.h>
#include<iomanip>
#include<string>

using namespace std;

int main()
{
	int n=44;
	string s="Hello";
	cout<<"&n = "<<&n<<"\n"; // use of reference using '&'
	cout<<"&s = "<<&s<<"\n";  
	
	int* p;        // declares p to be a dangling pointer to int
	int* q=0;      // initiaizes the pointer q to be null
	int* pn= &n;   // initializes the pointer pn with the address of n
	
	string* ps= &s;  //initializes the pointer with ps the address of s

    cout<<"*p = "<<p<<"\n";
    cout<<"*q = "<<q<<"\n";
    cout<<"*pn = "<<pn<<"\n";
    cout<<"*ps = "<<ps<<"\n";
    
    
    return 0;
}   

