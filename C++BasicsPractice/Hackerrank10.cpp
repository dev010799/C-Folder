#include<iostream>
using namespace std;

class Triangle
{
  public:
  void triangle()
  {
    cout << "I am a Triangle \n";
  }

};

class Isosceles:public Triangle
{
  public:
  void isosceles()
  {
    cout<<"I am Isosceles Triangle ";
  }
  

};

class Equilateral:public Isosceles
{
  public:

  void equilateral()
  {
    cout<<"I am Equilateral Triangle ";
  }

};
int main()
{
  Equilateral eqr;
  eqr.equilateral();
  eqr.isosceles();
  eqr.triangle();

}