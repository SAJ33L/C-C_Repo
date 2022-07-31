#include<iostream>

using namespace std;

// myFucntion takes input and delivers the answer to Main body
// fuction before the main body not having prototype 
// inline Function 

inline int myFunction(int x) 
{
  cout<<"FO"<<endl;
  
  return 5 + x;
  
}

// Main body

int main() 
{
   // calling myFunction
   cout << myFunction(3);
  
  return 0;
  
}

