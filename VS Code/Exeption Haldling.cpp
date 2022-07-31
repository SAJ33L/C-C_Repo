#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

void SomeFunc()
{
try
{
int* numPtr = new int;
*numPtr = 999;
delete numPtr;
}
catch(...) // ... catches all exceptions
{
cout << "Exception in SomeFunc(), quitting" << endl;
}
}

int main()
{
   SomeFunc();
   return 0;	
}