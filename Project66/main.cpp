#include<iostream>
using namespace std;

// class Test
// {
//   private:
//     int a;
//   protected:
//     int b;
//   public:
//     int c;
//   friend void fun();
// };

// // Whe you create object of an class then you can access only public members.
// // So you can access only public member not an private or protected.

// void fun()
// {
//   Test t;
//   t.a = 10;
//   t.b = 15;
//   t.c = 9;
// }
// int main()
// {
//   void fun();
// }

class Your;

class My
{
  private: 
    int a;
  protected:
    int b;
  public:
    int c;
    friend Your;
};

class Your
{
  public:
    My m;
    void fun()
    {
      m.a = 10;
      m.b = 10;
      m.c = 10;

    }
};