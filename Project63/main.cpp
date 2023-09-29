#include<iostream>
using namespace std;

// class Base 
// {
//   public:
//     void display()
//     {
//       cout << " Display of base " << endl;
//     }
// };

// class Derived: public Base
// {
//   public:
//     // void display(int x, int y)      // This is function overloading... dont comment out this line it is for understanding purpose...
//     void display()
//     {
//       cout << " Display of Derived " << endl;
//     }
// };

// int main()
// {
//   Derived d;
//   d.display();
//   // d.Base::display();                                   // This prints the value of Base... 
  
// }

// VIRTUAL FUNCTIONS:(Example 1)

// class  Base
// {
//   public:
//      void fun()
//       {
//         cout << " fun of Base " << endl;
//       }
// };

// class Derived : public Base
// {
//   public:
//       virtual void fun()
//       {
//         cout<< " function of derived " << endl;
//       }
// };

// int main()
// {
//   Derived d;
//   Base *ptr = &d;                                               // Base class pointer and Derived class Object.   
//   // d.fun();
//   ptr -> fun();                                                //  And we call it a function which is override function
// }

// When we declare virtual in base class  function then Derived function will be called..
// When we declare virtual in Derived class function then Base class function is called..
// SIMPLE REAL WORLD EXAMPLE:
// If we say this is donkey to run like a horse then it is possible NO it is not possible..
// But in C++ it is possible.


// VIRTUAL FUNCTIONS(Example 2)

class BasicCar
{
  public:
      virtual void start()
      {
        cout << " Basic car started " << endl;
      }
};

class AdvanceCar : public BasicCar
{
    public:
      void start()
      {
        cout << " Advance car Started " << endl;
      }
};

int main()
{
  BasicCar  *p = new AdvanceCar();                         // Function called is not based on the object attached to a pointer,It is based on the pointer.
  p -> start();
}

// So to make it work just like a real  world, I have to make it as Virtual.(i.e. BasicCar() function )
// This is nothing but Polymorphism.
// A base class pointer pointing to a derived class object and overrated function is called then the function of derived class that is based on the object
// It will be called if the base class function is declared virtual.
// This is nothing but Runtime Polymorphism.
// So using virtual function and override function and base class pointer derive class object can,then we can achieve polymorpphism.
// To achieve Runtime polymorphism we need 3 things as follows:
// 1.VIRTUAL FUNCTION OVERRIDING .
// 2.BASE CLASS POINTER.
// 3.DERRIVE CLASS OBJECT.