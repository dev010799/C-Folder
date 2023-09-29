#include<iostream>
using namespace std;


// This pointer topic:

class Rectangle
{
  private:
    int length;    // This length with l;
    int breadth;   // This breadth with b;
  
  public:
    Rectangle(int l , int b)
    {
      this -> length = length;
      this -> breadth = breadth;
    }

    int area()
    {
      return length * breadth;
    }

    int perimeter()
    {
      return 2*(length + breadth);
    }
};

int main()
{
  Rectangle r1(10,5);
  return 0;
}