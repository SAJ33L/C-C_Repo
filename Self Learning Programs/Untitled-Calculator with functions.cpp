#include<iostream>
#include<conio.h>
#include<iomanip>
#include<string>

// Prototype Declared to Avoid Error 

int factorial(int a);

using namespace std;

// Function for Addition with no return

void addition()
{
	int x,y;
	cout<<"Enter the First number : ";
	cin>>x;
	cout<<"Enter the second number : ";
    cin>>y;
	cout<<x<<" + "<<y<<" = "<<x+y;
}

// Function for Subtraction with no return

void subtraction()
{
	int x,y;
	cout<<"Enter the First number : ";
	cin>>x;
	cout<<"Enter the second number : ";
    cin>>y;
	cout<<x<<" - "<<y<<" = "<<x-y;
}


// Function for Multiplication with no return

void multipacation()
{
	int x,y;
	cout<<"Enter the First number : ";
	cin>>x;
	cout<<"Enter the second number : ";
    cin>>y;
	cout<<x<<" * "<<y<<" = "<<x*y;
}

// Function for Division with no return

void division()
{
	int x,y;
	cout<<"Enter the First number : ";
	cin>>x;
	cout<<"Enter the second number : ";
    cin>>y;
	cout<<x<<" / "<<y<<" = "<<x/y;
}

// Function for modulus with no return

void modulus()
{
	int x,y;
	cout<<"Enter the First number : ";
	cin>>x;
	cout<<"Enter the second number : ";
    cin>>y;
	cout<<x<<" % "<<y<<" = "<<x%y;
}

// Function for Squaring a number using return

int square(int a)
{
	int b = a*a;
	cout<<a<<"^2 "<< " = ";
	
	return b;
}

// Function for Cubing a number using return

int cube(int a)
{
	int b = a*a*a;
	cout<<a<<" * "<<a <<" * "<<a<<" = "<<b;
	
}


// Main body of the Program


int main()
{
	int x;
	cout<<"\t\t\tWelcome to the program of a Calculator Made using functions"<<endl\
    <<"So u have Multiple Choices avaible to do Various Calculations, Choose one of the following to do an operation : "<<endl;
    cout<<"(1)ADDITION\t\t(2)SUBTRACTION\n\(3)MULTIPLICATION\t\t(4)DIVSION\n(5)SQUARE\t\t(6)CUBE\n\t(7)FACTORIAL"<<endl;
    cout<<"Enter your choice : ";
    cin>>x;
    

	return 0 ;
	
	
}

// Definition of the Function Factorial after the main body to remember the use of Prototype

// Function for Factorial of a number using return

int factorial(int a)
{
	int i,j=1;
	
	for(i=1;i<=a;i++)
	{
		j=j*i;
	}
	return j;
}
