#include<iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 4; i++)
    {
              
        for (int j = 0; j <= 7; j++)
        {
             if (i%2!=0)
    {
    for (int k = 0; k <= j; k++)
    {
        cout<<"*";
     

     }
    cout<<endl;
    } 
    

    else
    {
        for (int j = 7;  j> 0; j--)
    {
        for (int k = j; k >= 0; k--)
    {
        cout<<" ";
      
    }
    cout<<endl;
    }
    
        }
        
    
    }
    }

 return 0;

}