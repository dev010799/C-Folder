#include<iostream>
using namespace std;


// Accessor & Mutator:(These are also called as Property functions.)
// So these mutator methods are used for validation purpose.
// Accessor is used for get.
// Mutator is used for set.

class Rectangle 
{
  private: 
    int length;
    int breadth;
    
  public:

  void setLength(int l)
  {
    if(l<0)
      length = 1;
    else
      length = l;
  }

  void setBreadth(int b)
  {
    if(b < 0)

      breadth = 1;

    else
      breadth = b; 


  }

  int getLength()
  {
    return length;
  }

  int getBreadth()
  {
    return breadth;
  }

  int area()
  {
    return length * breadth;
  }

  int perimeter()
  {
    return 2*(length * breadth);
  }
};

int main()
{
  Rectangle r1;
  // r1.length = 10;                    // Here gives the compiler error because length is private member same for breadth.
  // r1.breadth = 5;
  r1.setLength(-10);
  r1.setBreadth(5);

  cout << r1.area();                   // If we run our code we get some garbage value.


  return 0;
  
}