// CONSTRUCTORS IN INHERITANCE...
#include<iostream>
using namespace std;

// So this u should be aware of it..
// Whenever you are doing instance of classes then you should be aware that the parent class consstructor will be executed first then the child class constructor will be executed.. 

// We should  

class Base
{
  public:
    Base()                                                // Default Constructor of base.
    {
      cout << "Default of Base" << endl;
    }
    Base(int x)
    {
      cout << "Param of base" << x << endl;              //Parameterized constructor.
    }
};

class Derived: public Base
{
  public:
    Derived()
    {
      cout << " Default of Derived ";                   // Default Constructor of Derived.
    }

    Derived(int a)
    {
      cout << "Param of derived" << a;                 // Parametrized constructor.
    }
};

int main()
{
  Derived d;
  // Default of Base is first executed.
  // Default of Derived. 
} 