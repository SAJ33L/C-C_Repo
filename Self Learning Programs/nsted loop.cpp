#include <iostream>
using namespace std;
int main()
{
   			int i, j;
            int space = 0;
            int MAX = 5;
 
 
            for (i = MAX; i > 0; i--)
            {
 
                for (j = 0; j < i; j++)
                {
                    cout<<"*";
                }
                for (j = 0; j < space; j++)
                {
                    cout<<" ";
                }
 
                for (j = 0; j < i; j++)
                {
                    cout<<"*";
                }
 
                cout<<"\n";
                cout<<endl;
                space += 2;
            }
}
