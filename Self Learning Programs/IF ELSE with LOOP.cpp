#include<iostream>
#include<conio.h>

using namespace std;

int main()

{
	int b,a;
	float r,Pi,A,C;
	Pi= 3.14;
	cout<<"\n\n\n\t\t\tWelcome to the Program.\n\n\n"<<endl;
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

	  	 do 
		{ 
	  	cout<<"\n\nYour choice is invalid!!"<<endl;
	  	cout<<"\nEnter 0 to leave : "<<endl;
	  	cout<<"\n\t\t OR\n"<<endl;
	  	cout<<"Enter your choice again: ";
	  	
	  	cin>>b;
	  	cout<<endl;
	  	if ( b==1)
	  	{
		
	   
	   	
	   	b==1;
		   cout<<"You choosed to check the Area of the circle:"<<endl;
	   	A=Pi*r*r;
	   	cout<<"The result is: "<<A<<endl;
	   	
		}
	     else if( b==2)
	      {
	
	   
	   
	   	    cout<<"You choosed to check the Circumference of the circle:"<<endl;
	   	    C=Pi*2*r;
	   	    cout<<"The result is: "<<C<<endl;
	   	
	     }
        else if (b==3)
	     {   
	
	
	   
	         cout<<"You choosed to check the Area & Circumference of the circle:"<<endl;
	     	A=Pi*r*r;
	    	C=Pi*2*r;
	    	cout<<"The results are as following:\n\nArea:"<<A<<"\nCircumference" <<C<<endl; 
	   	
	     }

	    else if(b==0) 
	     { 
	     	cout<<"\n\n\t\t\t\t    ALLAH HAFIZ"<<endl;
	     }
	
     
	} while (b>3);
}	
    cout<<endl;
    cout<<endl;
	cout<<"Made by : \"SAJEEL KHAN\"\nRoll no: \'32\'"<<endl;
	system ("pause");
  
}
