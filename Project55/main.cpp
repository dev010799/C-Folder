#include<iostream>
using namespace std;

// Afriend function in C++ is defined as a function that can access private, protected and public members of a class.
// The friend function is declared using the friend keyword inside the body of the class.

class Complex
{
  private:
    int real;
    int img;

  public:
    Complex(int r = 0, int i = 0)
    {
      real = r;
      img = i;
    }

    void display()
    {
       cout << real << " +i " << img;
    }

    friend Complex operator+ (Complex c1 , Complex c2);

   
    // {
    //   Complex temp;
    //   temp.real = real + c.real;             // 'real' is a private member of complex
    //   temp.img = img + c.img;                // 'img' is a private member of commplex // I cant access them both
    // }

    // Complex operator+ (Complex c)
    // {
    //   Complex temp;
    //   temp.real = real + c.real;
    //   temp.img = img + c.img; 
    // }

     

};

    // So first of all I"ll make the changes in the signature of a function.
    // As we know if afunnction is outside the class, then it should take both the complex number as parameter.
    Complex operator+ (Complex c1 , Complex c2)
    {
      Complex temp;
      temp.real = c1.real + c2.real;             // 'real' is a private member of complex
      temp.img = c1.img + c2.img;                // 'img' is a private member of commplex // I cant access them both
      return temp;
    }

    // I will copy the signature of a function that is prototype of a function and i will paste it inside the class.
    // Global functions acting as overloaded operators.

    int main()
    {
      Complex c1(5,3) , c2(10,5), c3;

      c3 = operator+(c1,c2);

      c3.display();

    }
