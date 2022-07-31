#include<iostream>
#include<conio.h>
#include<iomanip>
#include<string>

using namespace std;

int main()
{
	int n = 66;
	string s = "Goodbye";
	
	cout<<n<<"\n";
	cout<<s<<"\n";
	
	int* pn = &n;  //initializes the pointer pn with the address of n
	string* ps = &s;  //initializes the pointer ps with the address of s
	
	cout<<"*pn = "<<pn<<"\n";
	cout<<"*ps = "<<ps<<"\n";
	
	int m = *pn; //initializes m with the int to which pn points
	string t = *ps;  //initializes t with string to which ps points
    
    cout<<"m = "<<m<<"\n";
    cout<<"t = "<<t<<"\n";
    
} 

