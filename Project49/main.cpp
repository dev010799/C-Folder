#include<iostream>
using namespace std;

class Rectangle
{
  private:
    int length;
    int breadth;

  public:
    Rectangle();                     // First 3 are constructors  
    Rectangle(int l , int b);        
    Rectangle(Rectangle &r);
    void setLength(int l);          // Mutator // Accessor & Mutators are property functions.
    void setBreadth(int b);         // Mutator
    int getLength(){return length;}              // Accessor         // inline function. 
    int getBreadth() {return breadth;}              // Accessor      // inline function.
    int area();                     // Facilitator
    int perimeter();                // Facilitator
    bool isSquare();                // Inspector or Enquiry.
    ~Rectangle();                   // Destructor    // This is Deallocation for object.
};

int main()
{
  
    Rectangle r1(10,10);
    cout << " Area " << r1.area() << endl;


    if(r1.isSquare())
        cout << " Yes " << endl;

}

Rectangle :: Rectangle(int l , int b)
{
  length = 1;
  breadth = 1;
} 

Rectangle :: Rectangle(int l , int b)
{
  length = l;
  breadth = b;
}

Rectangle :: Rectangle(Rectangle &r)
{
  length = r.length;
  breadth = r. breadth;
}

void Rectangle :: setLength(int  l)
{
  length = l;
}

void Rectangle :: setBreadth(int b)
{
  breadth = b;
}

int Rectangle :: area()
{
  length * breadth;
}

int Rectangle :: perimeter()
{
  2 *( length + breadth);
}

bool Rectangle :: isSquare()
{
  return length == breadth;
}

Rectangle :: ~Rectangle()
{
  cout << " Rectangle is Destroyed ";
}
