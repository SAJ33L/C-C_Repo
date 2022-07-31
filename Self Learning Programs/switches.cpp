/*
	Name: 
	Copyright: 
	Author: 
	Date: 25/11/20 22:23
	Description: 
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main()

{
	int b,a;
	float r,Pi,A,C;
	Pi= 3.14;
	cout<<"Welcome to the Program."<<endl;
	cout<<"Enter the value of radius of circle either to determine it's Area or Circumference or both."<<endl;
	cin>>r;
	cout<<"Enter your choice for desired result:"<<endl<<" (1)AREA\t(2)CIRCUMFERENCE\t(3)BOTH"<<endl;
	cin>>a;
	
		
	if(a==1)
	   {
	   	cout<<"You choosed to check the Area of the circle:"<<endl;
	   	A=Pi*r*r;
	   	cout<<"The result is: "<<A<<endl;
		} 
	
	else if(a==2)
	   {
	   	cout<<"You choosed to check the Circumference of the circle:"<<endl;
	   	C=Pi*2*r;
	   	cout<<"The result is: "<<C<<endl;
	   	
		   }	
	
	else if(a==3)
	   {
	    cout<<"You choosed to check the Area & Circumference of the circle:"<<endl;
	   	A=Pi*r*r;
	   	C=Pi*2*r;
	   	cout<<"The results are as following:\n\nArea:"<<A<<"\nCircumference:" <<C<<endl; 

	   }
	   

  


	else
	  {
	  	cout<<"Your choice is invalid!!"<<endl;
	  	cout<<"Enter your choice again: ";
	  	cin>>b;

	  	while(b>3)  
		{ 
	  	cout<<"Your choice is invalid!!"<<endl;
	  	cout<<"Enter your choice again: ";
	  	cin>>b;
	  	cout<<endl;
	  	
	  	switch(1)
	  	{
		  
		  case 1:
	   
	   	
	   	
		   cout<<"You choosed to check the Area of the circle:"<<endl;
	   	A=Pi*r*r;
	   	cout<<"The result is: "<<A<<endl;
	   	break;
		
	
	
	case 2:
	   

	   	cout<<"You choosed to check the Circumference of the circle:"<<endl;
	   	C=Pi*2*r;
	   	cout<<"The result is: "<<C<<endl;
	   	break;
	

	
	case 3:
	
	   
	   
	   
	    cout<<"You choosed to check the Area & Circumference of the circle:"<<endl;
	   	A=Pi*r*r;
	   	C=Pi*2*r;
	   	cout<<"The results are as following:\n\nArea:"<<A<<"\nCircumference" <<C<<endl; 
	   	break;
	   	
	   	
	   	default:
	   		cout<<"Your choice is invalid!!"<<endl;
	  	cout<<"Enter your choice again: ";
	   
         }
	  
	
     
	}
}	
  cout<<endl;
    cout<<endl;
	cout<<"Made by \"SAJEEL KHAN\"\nRoll no: \'32\'";
	system ("pause");
  
}
