#include<iostream>
using namespace std;

class Rectangle
{
  private:
    int length;
    int breadth;

  public: 
    Rectangle();
    Rectangle(int l, int b);
    Rectangle(Rectangle &r);
    int getLength(){return length;}
    int getBreadth(){return breadth;}
    void setLength(int l);
    void setBreadth(int b);
    int area();
    int perimeter();
    bool isSquare();
    ~Rectangle();
};

class Cuboid : public Rectangle
{
  private:
    int height;

  public:
   Cuboid(int h)
   {
    height = h;
   }

  int getHeight()
  {
    return height;
  }

  void setHeight(int h)
  {
    height = h;
  }

  int volume()
   {
    return getLength() * getBreadth() * height;
    
   }
};

  int main()
  {
    Cuboid c(5);
    c.setLength(10);
    c.setBreadth(7);
    cout << " Volume is " << c.volume() << endl;

  }

  // Rectangle :: Rectangle()
  // {
  //   length = 1;
  //   breadth = 1;
  // }

  // Rectangle :: Rectangle(int l,int b)
  // {
  //   length = l;
  //   breadth = b;
  // }

  // Rectangle :: Rectangle (Rectangle &r)
  // {

  // }

