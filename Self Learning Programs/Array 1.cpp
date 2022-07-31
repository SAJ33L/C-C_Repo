#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

int main()
{
	
	string a[4]; // an array of strings
	a[0]="Microsoft";
	a[1]="Oracle";
	a[2]="Inprise";
	a[3]="IBM";
	
	for(int i=0;i<4;i++)
	{
		cout<<"a["<<i<<"] = "<<a[i]<<"\n";
		
	}
	
	return 0;
}
