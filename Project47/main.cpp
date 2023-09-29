#include <iostream>
using namespace std;

// Pointer object created in stack memory:
// class Rectangle
// {
//   public:
//     int length;
//     int breadth;

//   int area()
//   {
//     return length * breadth;
//   }

//   int perimeter()
//   {
//     return   2*(length + breadth);
//   }
// };
// int main()
// {

//   Rectangle r1;
//   Rectangle *ptr;
//   ptr = &r1;
//   ptr -> length = 10;
//   ptr -> breadth = 5;                     // -> this is arrow operator or dereferencing operator.
//   cout << ptr -> area() << endl;
//   cout << ptr -> perimeter() << endl;

// }

// Created pointer object in Heap memory :

class Rectangle
{
  public:
    int length;
    int breadth;

  int area()
  {
    return length * breadth;
  }

  int perimeter()
  {
    return   2*(length + breadth);
  }
};
int main()
{

  
  Rectangle *ptr = new Rectangle;      // For heap memory use keyword new..
 
  ptr -> length = 10;
  ptr -> breadth = 5;                     // -> this is arrow operator or dereferencing operator.
  cout << ptr -> area() << endl;
  cout << ptr -> perimeter() << endl;

}