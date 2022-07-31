#include<iostream>
#include<conio.h>
#include<iomanip>
#include<string>

using namespace std;

int max(int* a, int n);


int main()
{
	int a[] = {44,77,33,66,5,88,22};
	cout<<" max (a,7) = "<< max(a,7) <<"\n";
    return 0;	
}

int max(int* a, int n)
{
	int m = a[0];
	
	for(int i=1; i<n ; i++)
	{
		if(a[i]>m)m=a[i];
		
	}
	
	return m;
}
