#include<iostream>
#include<string>

using namespace std;

class Book
{
    private:

    string title;
    string author;
    float rating;
    string description;

    public:

// setter method for decription
    void setDescription()
    {
        getline(cin,description);
    }

// getter method for description
string getDescription()
{
    return description;
}    

// setter method for title
    void setTitle(string Title)
    {
        title = Title;
    }

// getter method for title
string getTitle()
{
    return title;
}
// setter method for author
    void setAuthor(string Author)
    {
        author = Author;
    }

// getter method for author
string getAuthor()
{
    return author;
}

// setter method for rating
    void setRating(float Rating)
    {
        rating = Rating;
    }

// getter method for rating 
float getRating()
{
    return rating;
}

// constructor  
    Book(string name);

} ;

// main body/ driver body
int main()
{
    cout<<"This program is a basic use of class and some string fuctions such as getline.\n";
    cout<<"So this program has a class named book and you have to enter the book Title , Author , Rating and a Basic Description."<<endl;
    cout<<"Enter your Name :";
    string name;
 
   getline (cin , name);
    cout<<name<<endl;

    Book book1(name);

book1.setTitle("Sams C++ one Hour a Day");
book1.setAuthor("Sidharth Rao");
book1.setRating(7.5);
cout<<"The Title of the Book is : \""<<book1.getTitle()\
<<"\" , The Author of the Book is : \""<<book1.getAuthor()\
<<"\" , Ratings of the Book are as : "<<book1.getRating()<<endl;

cout<<"Now Enter the your remarks regarding the book :"<<endl;
book1.setDescription();


cout<<"The Title of the Book is : "<<book1.getTitle()<<endl;
cout<<"The Author of the Book is : "<<book1.getAuthor()<<endl;
cout<<"Rating of the Book are as : "<<book1.getRating()<<endl;
cout<<"Here is a little info ragarding the book :\n"<<book1.getDescription();
cout<<endl;

//system("pause");

    return 0;
}

// contructor defination
Book::Book(string name)
{
    cout<<"Hello Mr/Miss : \""<<name<<"\" this is a Class of book that will show you some info related to the book and give your oppinion regarding the book."<<endl;
}