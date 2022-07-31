#include<iostream>

using namespace std;

int main()

{
    cout<<"So I think we need to save the file to do something on VS Code."<<endl;
/* int *pointToAnInt = new int;
int* pNumberCopy = pointToAnInt;
*pNumberCopy = 30;
cout << *pointToAnInt;

delete pNumberCopy;	
delete pointToAnInt; */
    
  /*   for(int counter=0; counter<=10; counter++)
cout << counter << " "; */

/* int loopCounter = 0;
while(loopCounter <5)
{
cout << loopCounter << " ";
loopCounter++;
} */

int* pointToAnInt = new int;
//int* pCopy = pointToAnInt;
 delete pointToAnInt;   
    return 0;
}
