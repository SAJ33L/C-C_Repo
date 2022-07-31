#include<iostream>

using namespace std;

int main()
{
    int grades = 0;
    cout<<"Enter your numbers to check your Grade :";
    cin>>grades;

    if (grades>=90)
    {
        cout<<"Your grade is A!";
    }
    else if(grades<90 && grades>79)
    {
        cout<<"Your grade is B!";
    }
    
    else if (grades<80 && grades>69)
    {
        cout<<"Your grade is C!";
    }
    
    else if (grades<70 && grades>59)
    {
        cout<<"Your grade is D!";
    }
    
    else
    {
        cout<<"You did not passed!";
    }
    
    return 0;
}