#include<iostream>
using namespace std;

// Friend function Example..
// So Friend function is a Global function,Outside function, which can access all the members of a class upon object, not directly upon object.
// If object is there then it can access private also protected also public also.
// Class should say that ,that function though doesnt belong to us,But it is a friend for us so it can access all the members of our objects.
// This is useful in operator overloading mostly.

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

// void fun()
// {
//   Test t;
//   t.a = 10;
//   t.b = 5;
//   t.c = 2;
// }

// Only the public members are accessible upon the object.
// Not the private and protected are accessible.
// Then How we access Private and Protected 
// But I want this function (i.e. void main ) to acces those members i.e.(Private and Protected).
// For that thing we need to use friend function.

// class Your{};
// This code having hasA relationsip i.e.
// I have a class called your which is taking an object of this class.
// We already know that upon object only only public members are accessible.
// They can access members of objects of other classes.
class Your;
class My
{

  private:
    int a = 10;
  protected:
    int b = 10;
  public:
    int c = 10;

    friend Your;

  
    
  
};

class Your
{
  public:
    My m;
    void fun()
    {
      cout << m.a;
      cout <<  m.b;
      cout << m.c;
      
    }

};