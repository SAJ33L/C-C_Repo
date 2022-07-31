#include<iostream>
#include<string.h>
#include<string>
#include<Windows.h>

using namespace std;


int main()
{
    bool accountType = false;
string namesOfAccounts [100], accountChoice[100];
unsigned int accountBalance[100] ={0};  

int  index = 0 ,choice = 0, accountIdNumber = 0;
bool dataChoice = true;
while(dataChoice == true)
{
    
system("CLS"); 
   cout<<"This Program will let you enter the data of user in the bank account he/she creates."<<endl;
   cout<<"Enter one of the choices from the given";
   cout<<"\n\n";
   cout<<"1) Create An Account."<<endl;
    cout<<"2) View your Data."<<endl;
     cout<<"3) Update your Data."<<endl;
      cout<<"4) Delete your Data."<<endl;
      cout<<"5) Exit the Program."<<endl;



string fName, lName;    
cout<<"Enter Your Choice : ";
cin>>choice;



if(choice == 1)
{
    
system("CLS"); 
cout<<"You entered the choice 1....."<<endl;
cout<<"Your account will be created \n\n";
cout<<"Enter Your \'First Name\' : ";
cin>>fName;
cout<<"Enter Your \'Last Name\' : ";
cin>>lName;
namesOfAccounts[index] = fName + " " + lName;
cout<<"Enter the money You Want to deposit : ";
cin>>accountBalance[index];
cout<<"What Type of account you want....Savings or Current?"<<endl;

cout<<"Enter your choice for the account type \'0'\' for \'Current\' and \'1\' for \'Saving\' : ";
cin>>accountType;


if( accountType == true )
  { 
       accountChoice[index] = "Savings";
    cout<<"You have choosed a Saving Account."<<endl;
  
  }
else
{
    accountChoice[index] = "Current";
     cout<<"You have choosed a Current Account."<<endl;
}

cout<<"Your Index number in Bank is : "<<index+1;
cout<<endl;
index ++;
continue;
}
else if (choice == 2) 
 {

system("CLS"); 
cout<<"You entered the choice 2....."<<endl;
cout<<"You want to view data of your account  \n\n";
cout<<"Enter your Index number to check the data of your account...\n\n";
cin>>accountIdNumber;
index = accountIdNumber - 1;
if (namesOfAccounts[index] == "Null")
{
    cout<<"Sorry Account Does Not Exist....!\a";
    continue;
}

else{
cout<<"Name of the Account is : ";
cout<<namesOfAccounts[index]<<endl;
cout<<"The cash in Your account currently is....."<<accountBalance[index]<<" Rs"<<endl;
cout<<"Your Account type is "<<accountChoice[index]<<endl;
continue;
}
 }
 else if(choice == 3) 
 {
     
system("CLS"); 
     cout<<"You entered the choice 3 so you can update data on an Index...\n";
     cout<<"What do You want to change in Your Account....";
     cout<<"1: First Name\n2: Last Name \n3: Account Balance";
   continue;
 }
 else if(choice == 4) 
 {
     
system("CLS"); 
     cout<<"You Want to delete your account on the Index.... ";
    cin>>accountIdNumber;
    index = accountIdNumber - 1;
    namesOfAccounts[index] = "Null";
    accountChoice[index] = false;
    accountBalance[index] = 0;

   
 }

 else if(choice == 5) 
 {
   break;
 }
/*default: 
cout<<"INVALID COMMAND......!\a";
    break;

}
*/

 

}
return 0;

}

void viewData(int index , string& namesOfAccounts   )
{
    cout<<namesOfAccounts;

}