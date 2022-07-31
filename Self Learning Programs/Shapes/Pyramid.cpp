// Pyramid

#include<iostream>

using namespace std;
 
int main()

{
    int height, i, j;
    char ch;
    cout<<"Enter the characeter for the shape : ";
    cin>>ch;
    cout<<"Enter the height of the shape : ";
    cin>>height;
    
    for(i=1; i<=height; i++)
   {
     for(j=1; j<=i; j++)
     {
       cout<<j;
     }
     
     cout<<endl;
     
   }
     for(i=height-1; i>=1; i--)
   {
     for(j=1; j<=i; j++)
     {
       cout<<j;
     }
     
     cout<<endl;
     
   }
    return 0;
}
