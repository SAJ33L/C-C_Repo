#include<iostream>

using namespace std;

int main()

{

cout<<"\n\n\n\t\t\tWelcome to the Program.\n\n\n"<<endl;
cout<<"Enter the Week Day : ";
int day,a ;
cin>>day;
cout<<endl;
cout<<endl;
cout<<endl;

switch (day) 
{
  case 1:
    cout << "The day is \"Monday\"";
    break;
  case 2:
    cout << "The day is \"Tuesday\"";
    break;
  case 3:
    cout << "The day is \"Wednesday\"";
    break;
  case 4:
    cout << "The day is \"Thursday\"";
    break;
  case 5:
    cout << "The day is \"Friday\"";
    break;
  case 6:
    cout << "The day is \"Saturday\"";
    break;
  case 7:
    cout << "The day is \"Sunday\"";
    break;
    
    default:
    	cout<<endl;
    	cout<<endl;
    	
	cout << "Your input is Incorrect!" ;
	break;
}

cout<<endl;
cout<<endl;
    cout<<endl;
    cout<<endl;
	cout<<"Made by : \"SAJEEL KHAN\"\nRoll no: \'32\'"<<endl;
	system ("pause");
}
