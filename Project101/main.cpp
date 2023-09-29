#include<iostream>
using namespace std;

// ===========================================
// Auto keyword practice:
// float fun()
//   {
//     return 2.34f;
//   }

// string fun()
// {
//   return " My name is Dev ";
// }

// int fun()
// {
//   return 90;
// }

// double  fun()
// {
//   return 1.2;
// }


// int main()
// {
//   auto x = fun();
//   cout << x;
// }
// =================================================
// Final keyword:
// 1.restricts Inheritance features.
// 2.restricts overriding of functions.

class Parent 
{
  virtual void show() final
  {

  }

};

class child:Parent
{
  void show()
  {

  }
};

int main()
{

}