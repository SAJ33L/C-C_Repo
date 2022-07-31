#include<iostream>

using namespace std;

int main()
{
	int n=0, s=0;
	do{
		n++;
		s+=n;
		if(s>4)break;
		
	}while(n<5);
	
	cout<<s<<endl;
	
	return 0;
}
