// COMPLEX NUMBER CODE: EXAMPLE.

#include<iostream>
using namespace std;

class Complex
{
  public:
    int real;
    int img;

  Complex operator+(Complex c)                             // Instead of add operator+ we use..
  {                                                        // Prototypes and logic is very important...!
    Complex temp;
    temp.real = real + c.real;
    temp.img  = img  + c.img;
    return temp;
  }

};

int main()
{
  Complex c1,c2,c3;
  c1.real = 5 ; c1.img = 3;
  c2.real = 10 ; c2.img = 5;

  c3 = c2 + c1;
  cout << c3.real << " +i " << c3.img << endl;

  cout << endl;
  return 0;

}

// similarly Try for subtraction. 
// The logic is same as of addition ...!