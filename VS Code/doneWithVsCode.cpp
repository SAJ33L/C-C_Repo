#include<iostream>

using namespace std;

int main()
{
    int number = 2;
 int result = number;
    cout<<"Finally all good"<<endl;
    cout<<result<<endl;
    // this shifting is different because it's shifting with 6
 result = number << 1+5 <<1; 
cout<<endl;
cout<<result;
  result = number;
    cout<<"Finally all good"<<endl;
    cout<<result<<endl;
    // this shifting is different because it's shifting by 1 then adding 5 then shifting by 1
 result = ((number << 1)+5) <<1; 

cout<<result;
 
    return 0;  
}