#include<iostream>
using namespace std;

// For overloading an insertion operator i have to use friend function.
// class Complex
// {
//   private:
//     int real;
//     int img;

//   public:

//   friend ostream operator << (ostream &o , Complex &c1)       //Signature and prototype of a friend function.
// };

// ostream & operator << (ostream &o , Complex &c1)
//   {
//     o << c1.real << "+i" << c1.img;
//     return o;
//   }

//   int main()
//   {
//    Complex c1(3,7)

//    int x = 10;
//    cout << x;
//   //  c1.display();
//   }

// INSERTION OPERATOR:
class Complex
{
  private:
    int real;
    int img;

  public:
    Complex(int r = 0 , int i = 0)
    {
       real = r;
       img = i;
    }

    friend ostream & operator << (ostream & out, Complex &c);
};

 ostream & operator << (ostream &out , Complex &c)
  {
    out << c.real << " +i " << c.img << endl;
    // return out;
  }

int main()
{
   Complex c(10,5);
   cout << c << endl;                      // reference to overloaded function could not be resolved;did you mean to call it.?       //Writing this statement is similar to this one.
   operator<<(cout ,c);                   //Writing this statement is similar to this one.
}

// In this case if we run our code then :
// In output we get twice the same o/p i.e. 10 + i5 twice.
// because cout << c and operator <<(cout , c) is one and the same thing. thats why we may get same o/p twice..