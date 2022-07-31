#include<iostream>

#include<iomanip>
#include<string>

using namespace std;

int main()
{
	int n = 44;
	int &rn = n ;  // declares re to be the reference for n
	cout<<"n = "<<n<<"\n";
	cout<<"rn = "<<rn<<"\n";
	
	n*=2;  // doublen , and rn
	cout<<"n = "<<n<<"\n";
	cout<<"rn = "<<rn<<"\n";
	
	rn /=2;
	
	cout<<"n = "<<n<<"\n";
	cout<<"rn = "<<rn<<"\n";
	
	
}
