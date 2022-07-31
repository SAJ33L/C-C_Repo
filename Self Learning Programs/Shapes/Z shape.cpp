// z

#include <iostream>

using namespace std;

int main()
{
    int height, i, j;
    char ch;
    
    cout<<"Enter the character for the shape : ";
    cin>>ch;
    cout<<"Enter the height of the shape : ";
    cin>>height;
    for(i=1; i<=height; i++)
   {
     for(j=height; j>=1; j--)
     {
            //i=j – to print one digonal line
            //i==1 – First line will contain only stars
            //i == height – Last line will be of stars only
       if(i==1 || i==height || i==j)
         cout<<ch;
         
       else
         cout<<" ";
     }
     
     cout<<endl;
     
    }
    
    return 0;
}
