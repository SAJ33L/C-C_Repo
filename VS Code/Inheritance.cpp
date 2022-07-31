#include <iostream>
using namespace std;

// Base class
class MyClass {
  public:
    void myFunction() {
      cout << "Some content in parent class.\n" ;
    }
};

// Another base class
class MyOtherClass {
  public:
    void myOtherFunction() {
      cout << "Some content in another class.\n" ;
    }
};

// Derived class
class MyChildClass: public MyClass , public MyOtherClass {
};

// Another Derived class
class MygrandChildClass: public MyClass , public MyOtherClass {
};

int main() {


  MyChildClass myObj;
  myObj.myFunction();
  myObj.myOtherFunction();
   
   MygrandChildClass myObj1;
  myObj1.myFunction();
  myObj1.myOtherFunction();
  return 0;
}