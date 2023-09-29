#include<iostream>
using namespace std;

class Rectangle
{

  public:
    int length;      // declaration
    int breadth;     // declaration

    int area()
    {
        return length * breadth;
    }

    int perimeter()
    {
        return 2 * (length + breadth);
    }

};




  int main ()
  {
    Rectangle r1;          // Object 1
    r1.length = 10;        // Dot operator is used for accessing data members..
    r1.breadth = 5;
    cout << " Area is " << r1.area() << endl;
    cout << " Perimeter is " << r1.perimeter() << endl;

    Rectangle r2;         // Object 2
    r1.length = 10;       // Dot operator is used for accessing data members..
    r2.breadth = 5;
    cout << " Area is " << r2.area() << endl;
    cout << " Perimeter is " << r2.perimeter() << endl;


  }

  // Expected output:
   
   //
  // Perimeter is 30
  


  
