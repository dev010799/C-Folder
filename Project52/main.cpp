// Difference between structure and class:
// So basically structure and class are same.

#include<iostream>
using namespace std;


// Data members and function is given here
// Structure is more look like a class.(In c++ structure is nothing but class only.)

// struct Demo 
// {
//   int x;          
//   int y;

//   void Display()
//   {
//     cout << x << " and " << y << endl ;
    
//   }
// };

//   int main()
//   {
//     Demo d;
//     d.x = 10;
//     d.y = 20;
//     d.Display();
//   }

// Stop writing class instead of writing class I can even use structure.
// As we seen in below code:
// In this case x and y shows error 
// i.e. x is private member and y is private member.
// So it means when it was STRUCTURE what they were they were ACCESSIBLE.
// So it means all these are PUBLIC.

class Demo 
{
public:
  int x;          
  int y;

  void Display()
  {
    cout << x << " and " << y << endl ;
    
  }
};

  int main()
  {
    Demo d;
    d.x = 10;
    d.y = 20;
    d.Display();
  }