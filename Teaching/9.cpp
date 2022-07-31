#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int range;
   cout<<"This program shows the prime numbers"<<endl;
   cout<<"Enter the range to check for prime numbers.";
   cin>>range;
   
   for(int i =2;i<=range;i++)
   {
   	for(int j =2;j<i;j++)
   	{
   		if(i%j==0)
   		break;
   		
   		else if (i==j+1)
   		cout<<i<<" ";
   		
	   }
   }
   return 0;	
}
